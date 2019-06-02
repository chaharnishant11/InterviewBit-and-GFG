// Pattern for N = 5
//
//  1    2   3    4   5
//  11   12  13   14  15
//  21   22  23   24  25
//  16   17  18   19  20
//  6    7    8   9   10
//
// Input format : N (Total no. of rows)
// 
// Output format : Pattern in N lines
// Sample Input :
//
// 4
//
// Sample Output :
//
//  1  2  3  4
//  9 10 11 12
// 13 14 15 16
//  5  6  7  8
//
//


#include <iostream>
using namespace std;

// n - number of rows given
void printPattern(int n){

    int k;
    if(n%2==0){
        k=n/2;
    }else{
        k=n/2+1;
    }
    int x = 2*k-1;
    int num = 1;
    for(int i=1;i<=n;i++){
      for(int j=num;j<num+n;j++){
          cout << j << " ";
      }
      cout << endl;
      if(i<k){
          num=2*i*n+1;
      }else{
          if(n%2==0){
              num=x*n+1;
              x=x-2;
          }else{
              x=x-2;
              num=x*n+1;
          }

      }
    }


}
int main() {
    int n;
    cin >> n;
    printPattern(n);
}
