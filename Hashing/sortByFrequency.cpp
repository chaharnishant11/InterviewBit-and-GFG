#include <bits/stdc++.h>
using namespace std;

bool check(pair<int,int> const &a,pair<int,int> const &b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second>b.second;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    map<int,int> m;
	    vector<pair<int, int> > v;
	    for(int i=0;i<n;i++){
	        m[a[i]]++;
	    }

	    copy(m.begin(), m.end(), back_inserter(v));

        sort(v.begin(), v.end(), check);

        for (int i = 0; i < v.size(); ++i)
            for (int j = 0; j < v[i].second; ++j)
                cout << v[i].first << " ";
        cout<<endl;
	}
	return 0;
}
