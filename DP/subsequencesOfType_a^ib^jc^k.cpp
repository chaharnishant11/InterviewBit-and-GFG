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
	    int p=0;
	    int a[s.length()]={0};
	    for(int i=s.length()-1;i>=0;i--){
	        if(s[i]=='c'){
	            a[i]=pow(2,p);
	            p++;
	        }else if(s[i]=='b'){
	            for(int j=i+1;j<s.length();j++){
	                if(s[j]=='b' || s[j]=='c'){
	                    a[i]+=a[j];
	                }
	            }
	        }else if(s[i]=='a'){
	            for(int j=i+1;j<s.length();j++){
	                if(s[j]=='a' || s[j]=='b'){
	                    a[i]+=a[j];
	                }
	            }
	        }
	    }
	    int sum=0;
        for(int i=0;i<s.length();i++)
            if(s[i]=='a')sum+=a[i];

        cout << sum << endl;
	}
	return 0;
}
