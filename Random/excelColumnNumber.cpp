int Solution::titleToNumber(string A) {
    int ans=0;
    int i=A.length()-1;
    int c=1;
    while(i>=0){
        ans=ans+(A[i]-'A'+1)*c;
        i--;
        c*=26;
    }
    return ans;
}
