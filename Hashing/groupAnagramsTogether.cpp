#include <bits/stdc++.h>
using namespace std;

template <typename T1, typename T2>
struct less_second {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
        return a.second < b.second;
    }
};

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<n;i++){
	        sort(a[i].begin(),a[i].end());
	    }
	    map<string,int> m;
	    for(int i=0;i<n;i++){
	        m[a[i]]++;
	    }
	    vector<pair<string, int> > mapcopy(m.begin(), m.end());
        sort(mapcopy.begin(), mapcopy.end(), less_second<string, int>());
	    for(int i=0;i<mapcopy.size();i++){
	        cout << mapcopy[i].second << " ";
	    }
	    cout << endl;
	}
	return 0;
}
