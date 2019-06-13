void Solution::merge(vector<int> &A, vector<int> &B) {

    int i = 0, j = 0;
    while((i < A.size()) && (j < B.size())){
        if(A[i]>B[j]){
            A.insert(A.begin()+i, B[j]);
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    while(j != B.size()){
        A.push_back(B[j]);
        j++;
    }
}
