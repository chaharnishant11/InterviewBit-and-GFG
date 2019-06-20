#include <iostream>
using namespace std;

int towerOfHanoi(int n,char from_rod,char to_rod,char aux_rod){
    if(n==1){
        cout << "move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
        return 1;
    }
    int ans=0;
    ans+=towerOfHanoi(n-1,from_rod,aux_rod,to_rod);
    ans++;
    cout << "move disk " << n <<  " from rod " << from_rod << " to rod " << to_rod << endl;
    ans+=towerOfHanoi(n-1,aux_rod,to_rod,from_rod);
    return ans;
}


int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    cout << towerOfHanoi(n,'1','3','2') << endl;
	}
	return 0;
}
