#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    string s;
	    string pat;
	    cin >> s >> pat;
	    unordered_map<char,int> m;
	    for(int i=0;s[i]!='\0';i++){
	        if(m.find(s[i])==m.end()){
	            m[s[i]]=i;
	        }
	    }
	    char ans='$';
	    int a=1000000;
	    //bool printed=false;
	    for(int i=0;pat[i]!='\0';i++){
	        if(m.find(pat[i])!=m.end()){
	            if(m[pat[i]]<a){
	                a=m[pat[i]];
	                ans=pat[i];
	            }
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}
