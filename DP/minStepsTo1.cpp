#include<algorithm>
#include<climits>

int helper(int n,int a[]){
    if(n<=0) return 0;
    if(n==1) return 1;
    int x=INT_MAX,y=INT_MAX,z=INT_MAX;
    if(n-1>0){
        if(a[n-1]!=0)x=a[n-1];
        else{
            x=helper(n-1,a);
            a[n-1]=x;
        }
    }if(n%2==0){
        if(a[n/2]!=0) y=a[n/2];
        else{
            y=helper(n/2,a);
            a[n/2]=y;
        }
    }if(n%3==0){
        if(a[n/3]!=0) z=a[n/3];
        else{
            z=helper(n/3,a);
            a[n/3]=z;
        }
    }
    return min(x,min(y,z))+1;

}

int countStepsTo1(int n){

    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     */
    int a[n]={0};
    a[0]=0;
    a[1]=0;
    a[2]=1;
    a[3]=1;
    return helper(n,a);
}
