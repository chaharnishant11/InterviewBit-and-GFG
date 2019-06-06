t#include<bits/stdc++.h>
 using namespace std;

 int Solution::maxSubArray(const vector<int> &A) {

    int maxsofar=INT_MIN,max=0;
    for(int i=0;i<A.size();i++){
        max+=A[i];
        if(maxsofar<max){
            maxsofar=max;
        }if(max<0){
            max=0;
        }
    }
    return(maxsofar);
}
