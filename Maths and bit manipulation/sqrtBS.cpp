int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int l=1,h=A,ans=0;
    int mid=(l+h)/2;
    while(l<=h){
        mid=(l+h)/2;
        long s=mid*mid;
        if(s==A){
            return mid;
        }if(s<A){
            l=mid+1;
            ans=mid;
        }else{
            h=mid-1;
        }
    }
    return ans;
}
