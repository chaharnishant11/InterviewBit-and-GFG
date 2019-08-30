vector<int> Solution::getRow(int A) {
    vector<int> v1;
    vector<int> v2;
    bool flag=false;
    v1.push_back(1);
    while(A>0){
        if(!flag){
            v2.push_back(v1[0]);
            for(int i=1;i<v1.size();i++){
                v2.push_back(v1[i-1]+v1[i]);
            }
            v2.push_back(v1[v1.size()-1]);
            v1.clear();
            flag=!flag;
        }else{
            v1.push_back(v2[0]);
            for(int i=1;i<v2.size();i++){
                v1.push_back(v2[i-1]+v2[i]);
            }
            v1.push_back(v2[v2.size()-1]);
            v2.clear();
            flag=!flag;
        }
        A--;
    }
    if(flag) return v2;
    return v1;
}
