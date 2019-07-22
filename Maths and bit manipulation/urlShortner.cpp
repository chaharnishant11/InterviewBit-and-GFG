using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	string s="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> v;
	    int d=n;
	    while(n>0){
	        int r=n%62;
	        v.push_back(r);
	        n/=62;
	    }
	    string ans="";
	    for(int i=0;i<v.size();i++){
	        ans=s[v[i]]+ans;
	    }
	    cout << ans << endl;
	    int id=0;
	    for (int i=0; i < ans.length(); i++){
            if ('a' <= ans[i] && ans[i] <= 'z')
              id = id*62 + ans[i] - 'a';
            if ('A' <= ans[i] && ans[i] <= 'Z')
              id = id*62 + ans[i] - 'A' + 26;
            if ('0' <= ans[i] && ans[i] <= '9')
              id = id*62 + ans[i] - '0' + 52;
        }
        cout << id << endl;
	}
	return 0;
}
