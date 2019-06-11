

//TLE
int Solution::maxSpecialProduct(vector<int> &A) {
    vector<long long int>l(A.size());
    vector<long long int>r(A.size());
    r[A.size()-1]=0;
    l[0]=0;
    for(int i=A.size()-2;i>=0;i--){
        for(int j=i+1;j<A.size();j++){
            if(A[i]<A[j]){
                r[i]=j;
                break;
            }
        }
    }
    for(int i=0;i<A.size();i++){
        for(int j=i-1;j>=0;j--){
            if(A[i]<A[j]){
                l[i]=j;
                break;
            }
        }
    }
    long long int m=0;
    for(int i=0;i<A.size();i++){
        //cout << l[i] << " " << r[i] << endl;
        m=max(m,r[i]*l[i]);
    }

    return m%1000000007;
}
//IDEAL
