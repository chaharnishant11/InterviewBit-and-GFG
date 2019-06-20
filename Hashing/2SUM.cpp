vector<int> Solution::twoSum(const vector<int> &A, int B) {
    map<int,int> m;
    vector<int> ans;
    for(int i=0;i<A.size();i++){
        int req=B-A[i];
        if(m.find(req)!=m.end()){
            ans.push_back(m[req]);
            ans.push_back(i+1);
            return ans;
        }if(m.find(A[i])==m.end()){
            m[A[i]]=i+1;
        }
    }
    return ans;
}
