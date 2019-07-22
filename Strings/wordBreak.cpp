#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
using namespace std;
unordered_set<string>dict;
bool func(string &s,int i, vector<int>&dp){

    if(i==s.length())
    return 1;
    if(dp[i]!=-1)
    return dp[i];
    for(int j=i+1;j<=s.length();++j){
        if(dict.find(s.substr(i,j-i))!=dict.end()){
            if(func(s,j,dp)){
                return dp[i]=1;
            }
        }
    }
    dp[i]=0;
    return dp[0];

}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string a,s;
	    cin>>n;
	    dict.clear();
	    while(n--){
	        cin>>a;
	        dict.insert(a);
	    }
	    cin>>s;
	    vector<int>dp(s.length(),-1);
	    cout<<func(s,0,dp)<<endl;
	}

	return 0;

}
