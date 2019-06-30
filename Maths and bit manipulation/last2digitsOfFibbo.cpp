#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin >> n;
        if(n>=300) n=n%300;
        int a = 0;
        int b = 1;
        int count =0;
        while(count < n){
            int sum = a+b;
            if(sum>=100){
                sum = sum%100;
            }
            a = b;
            b = sum;
            count++;
        }
        cout << a << '\n';
    }
    return 0;
}
