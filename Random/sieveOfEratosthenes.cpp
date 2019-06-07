#include<bits/stdc++.h>
using namespace std;

vector<int> sieve(int A) {
    vector<int> ret;
    bool prime[A+1];
    memset(prime, true, sizeof(prime));


    for(int i=2;i*i<=A;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=A;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=A;i++){
        if(prime[i]==true){
            ret.push_back(i);
        }

    }
    return ret;

}

int main(){
  int A;
  cin >> A;
  vector<int> Ans = sieve(A);
  for(int i=0;i<Ans.size;i++){
    cout << Ans[i] << " ";
  }
}
