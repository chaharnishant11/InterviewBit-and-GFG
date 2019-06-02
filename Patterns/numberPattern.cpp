// Pattern for N = 4
//
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4


#include<iostream>
using namespace std;


void printPattern(int n){
    int i = 2*n-1;
    int num = n;
    int l = 1;
    while(l<=2*n-1){
        for(int j=n; j > num ;j--){
            cout << j << " ";
        }
        for(int j=1; j<=i;j++){
            cout << num << " ";
        }
        for( int j=num+1;j<=n;j++){
            cout << j << " ";
        }
        if(l<n){
            num--;
            i=i-2;
        }
        else{
            num++;
            i=i+2;
        }
        l++;
        cout << endl;
    }

}

int main(){
  int n;
  cin >> n;
  printPattern(n);

}
