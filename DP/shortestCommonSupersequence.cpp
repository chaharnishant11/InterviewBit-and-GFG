#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int lcs(char* s1,char* s2,int m,int n,int **dp){
	for (int i = 0; i <=m; i++) {
		dp[i][0] = 0;
	}
	for (int i = 0; i <=n ;i++) {
		dp[0][i] = 0;
	}

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j<= n; j++) {
			if (s1[m - i] == s2[n - j]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}	else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    string s1,s2;
	    cin >> s1 >> s2;
	    int m=s1.length();
	    int n=s2.length();
	    int dp[m+1][n+1];
	    for (int i = 0; i <=m; i++) {
    		dp[i][0] = 0;
    	}
    	for (int i = 0; i <=n ;i++) {
    		dp[0][i] = 0;
    	}

    	for (int i = 1; i <= m; i++) {
    		for (int j = 1; j<= n; j++) {
    			if (s1[m - i] == s2[n - j]) {
    				dp[i][j] = 1 + dp[i - 1][j - 1];
    			}	else {
    				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    			}
    		}
    	}
	    cout << (n+m)-dp[m][n] << endl;
	}
	return 0;
}
