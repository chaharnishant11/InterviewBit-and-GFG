int Solution::searchMatrix(vector<vector<int> > &A, int x) {
    int r=A.size(),c=A[0].size();
    int row=-1;
    for(int i=0;i<r;i++){
        if(x>=A[i][0]&&x<=A[i][c-1]){
            row=i;
            break;
        }
    }
    if(row==-1) return 0;
    int low=0,high=c-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(A[row][mid]==x) return 1;
        if(A[row][mid]<x) low=mid+1;
        else high=mid-1;
    }
    return 0;
}
