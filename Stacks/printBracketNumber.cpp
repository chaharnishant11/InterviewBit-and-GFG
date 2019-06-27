#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    stack<int> st;
	    int c=1;
	    for(int i=0;i<s.size();i++){
	        if(s[i]==40){
	            st.push(c);
	            cout << st.top() << " ";
	            c++;
	        }else if(s[i]==41){
	            cout << st.top() << " ";
	            st.pop();
	        }
	    }
	    cout << endl;
	}
	return 0;
}
