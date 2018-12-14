package multi;

class NewThread implements Runnable {
  String name;
  Thread t;
  Emp e;
  NewThread(String threadname,Emp x) {
    name = threadname;
    e=x;
    t = new Thread(this, name);
    System.out.println("New thread: " + t);
    t.start();
}
  public void run() {
    try {
    		e.printDET();
    		System.out.println();
    		Thread.sleep(1000);
    } catch (InterruptedException e) {
      System.out.println(name + " interrupted.");
}
    System.out.println(name + " exiting.");
  }
}

class Emp {

    int empid;
    String Name;
    String designation;
    double basic;
    double hra;
    
    int getEmpid() {
        return empid;
    }

    void setEmpid(int empid) {
        this.empid = empid;
    }

    String getName() {
        return Name;
    }

    void setName(String name) {
        Name = name;
    }

    String getDesignation() {
        return designation;
    }

    void setDesignation(String designation) {
        this.designation = designation;
    }

    double getBasic() {
        if (basic < 500) {
            try {
                throw new LowSalException();

            } catch (LowSalException e) {
                System.out.println(e);
            }
        }
        return basic;
    }

    void setBasic(double basic) {
        this.basic = basic;
    }

    public Emp(int empid, String name, String designation, double basic) {

        this.empid = empid;
        Name = name;
        this.designation = designation;
        this.basic = basic;
        this.getBasic();
        this.calculateHRA();
        
    }

    public void printDET() {
        System.out.println("Id Of Employye :" + empid
                + "\nName of Employee is :" + Name
                + "\nDesignation Of Employee is:" + designation
                + "\nSalary Of Employee :" + basic);
        System.out.println("Hra is "+hra);

    }

    public void calculateHRA() {
        if (designation == "Manager") {

            hra = basic * 0.1;
        }

        else if (designation == "Officer") {

            hra = basic * 0.12;
        }
        else
        {
            hra= basic*0.05;
        }
    }

    public static void main(String[] args) {
        Emp e1 = new Emp(1, "Apaar", "Manager", 60000);
        NewThread t1= new NewThread("Thread 1",e1);
        System.out.println();
        try {
        	t1.t.join();
        }catch(InterruptedException e) {
        	System.out.println(e);
        }
        
        
        Emp e2=new Emp(2,"Paritosh","officer",15000);
        NewThread t2= new NewThread("Thread 2",e2);
        System.out.println();
        try {
        	t2.t.join();
        }catch(InterruptedException e) {
        	System.out.println(e);
        }
        
        Emp e3=new Emp(3,"Sushant","cleark",150);
        NewThread t3= new NewThread("Thread 3",e3);
        try {
        	t3.t.join();
        }catch(InterruptedException e) {
        	System.out.println(e);
        }
     }

}
class LowSalException extends Exception {
    @Override
    public String toString() {
        return "Basic is less than 500 ";
    }
}
