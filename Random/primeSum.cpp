int isPrime(int A) {

    if(A==1)
        return 0;


    for(int i=2;i<=sqrt(A);i++){
        if(A%i==0)
            return 0;
    }

    return 1;
}

vector<int> Solution::primesum(int A) {

    vector <int> v;

    for(int a = 2;a<=A;a++){

        int b = A-a;

            if(isPrime(a)==1 && isPrime(b)==1 ){
                v.push_back(a);
                v.push_back(b);

                return v;
            }


    }
}
