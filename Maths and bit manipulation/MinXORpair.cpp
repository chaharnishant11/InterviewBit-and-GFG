int Solution::findMinXor(vector<int> &A) {
    int M=INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++){
         int m=A[i]^A[i+1];
        M=min(M,m);
    }

    return M;
}
