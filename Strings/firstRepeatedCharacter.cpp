#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    map<char,int> m;
	    bool printed = false;
	    for(int i=0;s[i]!='\0';i++){
	        if(m.find(s[i])==m.end()){
	            m[s[i]]++;
	        }else{
	            cout << s[i] << endl;
	            printed = true;
	            break;
	        }
	    }
	    if(!printed){
	        cout << -1 << endl;
	    }
	}
	return 0;
}
