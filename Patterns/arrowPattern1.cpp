// Pattern for N = 7
//
// *
//  * *
//    * * *
//      * * * *
//    * * *
//  * *
// *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = n/2 +1 ;
    int l = 1;
    int s = 0;
    int k = n/2;
    while(l<=n){
        if(l<=i){
            s=l-1;
            for(int j=0;j<s;j++){
                cout << " " ;
            }
            for(int j=0;j<l;j++){
                cout << "*" << " ";
            }
        }else{
            s=k-1;
            for(int j=0;j<s;j++){
                cout << " " ;
            }
            for(int j=0;j<k;j++){
                cout << "*" << " ";
            }
            k--;
        }
        cout << endl;
        l++;
    }
}
