#include <climits>
int minCount(int n){

  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */
    if(n==0){
        return 0;
    }
    int i=1;
    int ans=INT_MAX;
    while(i*i<=n){
        ans=min(ans,minCount(n-(i*i))+1);
        i++;
    }
    return ans;


}
