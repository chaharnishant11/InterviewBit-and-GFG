int Solution::findCount(const vector<int> &A, int B) {
    int start=0,end=A.size()-1;
    int count=0;
    int s=-1,e=-1;
    int mid=(start+end)/2;
    while(start<=end){
        mid=(start+end)/2;
        if(A[mid]==B){
            s=mid;
            end=mid-1;
        }else if(A[mid]>B){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    start=0;
    end=A.size()-1;
    mid=(start+end)/2;
    while(start<=end){
        mid=(start+end)/2;
        if(A[mid]==B){
            e=mid;
            start=mid+1;
        }else if(A[mid]>B){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    if(e==-1 && s==-1){
        return 0;
    }
    return e-s+1;
}
