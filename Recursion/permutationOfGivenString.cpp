#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void permute(string s,string chosen){
    if(s.empty()){
        cout << chosen << " ";
    }else{
        for(int i=0;i<s.length();i++){
            char c=s[i];
            s.erase(i,1);
            chosen+=c;

            permute(s,chosen);

            chosen.erase(chosen.length()-1,1);
            s.insert(i,1,c);
        }
    }
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    sort(s.begin(),s.end());
	    permute(s,"");
	    cout << endl;
	}
	return 0;
}
