int countBST( int n)
{
  /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int *out=new int[n+1];
    out[0]=1;
    out[1]=1;
    for(int i=2;i<=n;i++){
        out[i]=0;
        for(int j=1;j<=i;j++){
            out[i]=((out[i]%1000000007)+((out[j-1]%1000000007)*(out[i-j])%1000000007)%1000000007)%1000000007;
        }
    }
    long ans=out[n]%1000000007;
    delete []out;
    return ans;
}
