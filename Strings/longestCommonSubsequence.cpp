#include <iostream>
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

	int ans =  dp[m][n];
	// delete 2d array

	return ans;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n>>m;
	    char s1[n+1];
	    char s2[m+1];
	    cin >> s1  >> s2;
	    int **dp=new int*[n+1];
        for(int i=0;i<=n;i++){
            dp[i]=new int[m+1];
            for(int j=0;j<=m;j++){
                dp[i][j]=-1;
            }
        }
	    cout << lcs(s1,s2,n,m,dp) << "\n";
	}
	return 0;
}
