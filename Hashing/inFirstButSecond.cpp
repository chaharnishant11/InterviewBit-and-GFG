#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	    long a[n],b[m];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<m;i++){
	        cin >> b[i];
	    }
	    unordered_set <int> s;
        for (int i = 0; i < m; i++)
            s.insert(b[i]);

        for (int i = 0; i < n; i++)
            if (s.find(a[i]) == s.end())
                cout << a[i] << " ";
	    cout << endl;
	}
	return 0;
}
