#include <string>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s="";
	    while(n>0){
            n--;
            char x='A'+n%26;
            s=x+s;
            n/=26;
        }
        cout << s << endl;
	}
	return 0;
}
