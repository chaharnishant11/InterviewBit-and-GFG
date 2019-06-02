#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = n-1;
    int i=1;
    int r=0;
    int l=1;
    while(l<=n){
        for(int j=0;j<s;j++){
            cout << " " ;
        }
        i=l;
        for(int j=s;j<n;j++){
            cout << i ;
            i++;
        }
        int k = i-2;
        for(int j=0;j<r;j++){
            cout << k ;
            k--;
        }
        cout << endl;
        s--;
        l++;
        r++;
    }
}
