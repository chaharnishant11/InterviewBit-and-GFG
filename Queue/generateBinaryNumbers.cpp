#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    queue<string> q;
	    q.push("1");
	    while(n--){
	        string top=q.front();
	        q.pop();
	        cout << top << " ";
	        q.push(top+"0");
	        q.push(top+"1");
	    }
	    cout << endl;
	}
	return 0;
}
