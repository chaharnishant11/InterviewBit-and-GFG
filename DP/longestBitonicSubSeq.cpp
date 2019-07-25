int Solution::longestSubsequenceLength(const vector<int> &A) {
    if(A.size()==0) return 0;
    int inc[A.size()];
    int dec[A.size()];
    inc[0]=1;
    for(int i=1;i<A.size();i++){
        inc[i]=1;
        for(int j=0;j<i;j++){
            if(A[i] > A[j]){
                inc[i]=max(inc[i],inc[j]+1);
            }
        }
    }
    dec[A.size()-1]=1;
    for(int i=A.size()-2;i>=0;i--){
        dec[i]=1;
        for(int j=A.size()-1;j>i;j--){
            if(A[i]>A[j]){
                dec[i]=max(dec[i],dec[j]+1);
            }
        }
    }
    int ans=dec[0]+inc[0]-1;
    for(int i=1;i<A.size();i++){
        ans=max(ans,inc[i]+dec[i]-1);
    }
    return ans;
}
