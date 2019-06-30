#include <bits/stdc++.h>
using namespace std;

bool primeNum[1000001];
vector<int> primeArray;
void sieveOfEratosthenes(int N) {
    for(int i=2; i*i<=N; i++) {
        if(primeNum[i]) {
            for(int j=i*i; j<=N; j=j+i) {
                primeNum[j] = 0;
            }
        }
    }
    for(int i=2; i<=N; i++) {
        if(primeNum[i]) {
            primeArray.push_back(i);
        }
    }
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    memset(primeNum, 1, sizeof(primeNum));
    sieveOfEratosthenes(1000000);
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        int counter=0;
        int index = 0;
        long long int currentNum = primeArray[index] * primeArray[index];
        while(currentNum <= n) {
            counter++;
            index++;
            if(index==primeArray.size()) break;
            currentNum = (long long)primeArray[index] * (long long)primeArray[index];
        }
        cout<<counter<<endl;
    }
	return 0;
}
