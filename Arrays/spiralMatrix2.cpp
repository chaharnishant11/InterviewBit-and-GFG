vector<vector<int> > Solution::generateMatrix(int A){
    vector<vector<int>> ans(A, vector<int>(A, 0));
    int rs=0,re=A-1,cs=0,ce=A-1,c=0;
    int k=1;
    while(c!=A*A){
        for(int i=cs;i<=ce && c!=A*A;i++){
            ans[rs][i]=k++;
            c++;
        }rs++;
        for(int i=rs;i<=re && c!=A*A;i++){
            ans[i][ce]=k++;
            c++;
        }ce--;
        for(int i=ce;i>=cs && c!=A*A;i--){
            ans[re][i]=k++;
            c++;
        }re--;
        for(int i=re;i>=rs && c!=A*A;i--){
            ans[i][cs]=k++;
            c++;
        }cs++;
    }
    return ans;

}
