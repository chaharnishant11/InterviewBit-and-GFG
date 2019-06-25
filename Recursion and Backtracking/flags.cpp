long long helper(int n,char p,char pp){
    if(n==1) return 1;
    long long ans=0;
    if(p=='B' && pp=='W'){
        ans+=helper(n-1,'R','B');
    }if(p=='B' && pp=='R'){
        ans+=helper(n-1,'W','B');
    }if(p=='W'){
        ans+=helper(n-1,'B','W');
        ans+=helper(n-1,'R','W');
    }if(p=='R'){
        ans+=helper(n-1,'B','R');
        ans+=helper(n-1,'W','R');
    }
    return ans;
}


long long find_Ways(int N)
{
    /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Taking input and printing output is handled automatically.
  */
    return helper(N,'B','W')+helper(N,'B','R');

}
