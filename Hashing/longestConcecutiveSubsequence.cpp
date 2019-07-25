int Solution::longestConsecutive(const vector<int> &A) {
    unordered_map<int,int> S;
    for(int i=0;i<A.size();i++){
        S[A[i]]=i;
    }
    int ans=1;
    for (int i=0; i<A.size(); i++)
    {
        if (S.find(A[i]-1) == S.end()){
            int j = A[i];
            while (S.find(j) != S.end())
                j++;
            ans = max(ans, j - A[i]);
        }
    }
    return ans;
}
