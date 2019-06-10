#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;

    return false;
}

int main() {
	//code
	int t;
	cin>>t;
	cin.ignore(1, '\n');
	while(t--) {
	    string s1;
	    getline(cin, s1);
	    int vowelCount = 0;
	    int consonantCount = 0;
	    bool bad = false;
	    const int maxVowelCount = 5;
	    const int maxConsonantCount = 3;

	    for(int i=0; i<s1.length(); i++) {
	        if(isVowel(s1[i])) {
	            consonantCount = 0;
	            vowelCount++;
	            if(vowelCount > maxVowelCount) {
	                bad = true;
	                break;
	            }

	        } else if(s1[i] == '?') {

                    consonantCount++;
	                vowelCount++;
    	            if(consonantCount > maxConsonantCount) {
    	                bad = true;
    	                break;
    	            }
                      if(vowelCount > maxVowelCount) {
    	                bad = true;
    	                break;
    	              }
	            }
	         else {
	            vowelCount = 0;
	            consonantCount++;
	            if(consonantCount > maxConsonantCount) {
	                bad = true;
	                break;
	            }
	        }
	    }

	    if(bad) cout<<0<<endl;
	    else cout<<1<<endl;
	}
	return 0;
}
