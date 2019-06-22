#include<vector>
void helper(int input[],int n,int k,vector<int> e){
    if(k<0){
        return;
    }
    if(k==0){
        for(int i=0;i<e.size();i++){
            if(i==e.size()-1){
                cout << e[i];
            }else{
                cout << e[i] << " ";
            }
        }
        cout << endl;
        return;
    }
    if(n==0) return;
    e.push_back(input[0]);
    helper(input+1,n-1,k-input[0],e);
    e.erase(e.end()-1);
    helper(input+1,n-1,k,e);
    return;
}

void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    vector<int> a;
    helper(input,size,k,a);
}
