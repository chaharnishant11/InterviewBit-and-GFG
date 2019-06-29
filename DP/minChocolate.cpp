int getMin(int *arr, int n){
   /* Don't write main().
      Don't read input, it is passed as function argument.
      Return output and don't print it.
      Taking input and printing output is handled automatically.
   */
    int *dp=new int[n];
    dp[0]=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            dp[i]=dp[i-1]+1;
        }else{
            dp[i]=1;
        }
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1] && dp[i]<=dp[i+1]){
            dp[i]=1+dp[i+1];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=dp[i];
    }
    delete[] dp;
    return ans;
}
