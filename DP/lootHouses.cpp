#include <bits/stdc++.h>
using namespace std;
int getMaxMoney(int arr[], int n){

	/*Write your code here.
	 *Don’t write main().
	 *Don’t take input, it is passed as function argument.
	 *Don’t print output.
	 *Taking input and printing output is handled automatically.
         */
    int i=2;
    int *dp = new int[n+1];
    dp[0]=arr[0];
    if(n>1){
        dp[1]=max(arr[1],dp[0]);
    }
    while(i<n){
        dp[i]=0;
        dp[i]=max(dp[i-2]+arr[i],dp[i-1]);
        dp[i]=dp[i]%1000000007;
        i++;
    }
     int ans=dp[n-1];
    return ans;
}
