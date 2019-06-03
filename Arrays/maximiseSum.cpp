#include <iostream>

using namespace std;

long Max(long a, long b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}


long maxPathSum(int a[], int b[], int n, int m)
{
    long maxSum = 0;
    int i=0,j=0;
    long s1=0,s2=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            s1=s1+a[i++];
        }else if(b[j]<a[i]){
            s2=s2+b[j++];
        }else{
            s1+=a[i++];
            s2+=b[j++];
            maxSum+=Max(s1,s2);
            s1=0,s2=0;
        }
    }

    while(i<n){
        s1+=a[i++];
    }
    while(j<m){
        s2+=b[j++];
    }
    maxSum+=Max(s1,s2);

    return maxSum;

}


int main() {
    int *a,*b,m,n,i;
    cin>>m;
    a=new int[m];
    for(i=0;i<m;i++)
        cin>>a[i];
    cin>>n;
    b=new int[n];
    for(i=0;i<n;i++)
        cin>>b[i];
    long ans = maxPathSum(a,b,m, n);
    cout << ans << endl;
    delete a;
    delete b;
    return 0;
}
