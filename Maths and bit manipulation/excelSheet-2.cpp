#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int i=0;
	    int ans=0;
	    for(int j=s.length()-1;j>=0;j--){
	        ans=ans+(s[j]-'A'+1)*pow(26,i);
	        i++;
	    }
	    cout << ans << endl;
	}
	return 0;
}
