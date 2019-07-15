#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    int sum=0;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        sum+=a[i];
	    }
	    int temp=sum/2;
	    int dp[n+1][temp+1];
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=temp;j++){
	            if(i==0 || j==0){
	                dp[i][j]=0;
	            }else if(j>=a[i-1]){
	                dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i-1]]+a[i-1]);
	            }else{
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    }
	    cout << sum-2*dp[n][temp] << endl;

	}
	return 0;
}
