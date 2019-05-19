#include<iostream>
using namespace std;

int power(int x, int n) {
  if(n==1){
    return x;
  }if(n==0){
    return 1;
  }
  int sp=power(x,n-1);
  int p=x*sp;
  return p;

}
int main(){
    int x, n;
    cin >> x >> n;
  
    cout << power(x, n) << endl;
}

