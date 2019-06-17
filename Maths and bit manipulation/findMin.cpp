//Find min in the given sorted array
int Solution::findMin(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int l=0,h=A.size()-1;
    int mid=(l+h)/2;
    while(l<=h){
        if(A[l]<=A[h]) return A[l];
        mid=(l+h)/2;
        int next=(mid+1)%(A.size()-1),prev=(mid+(A.size()-1)-1)%(A.size()-1);
        if(A[mid]<=A[next] && A[mid]<=A[prev]) return A[mid];
        else if(A[mid]<=A[h]) h=mid-1;
        else if(A[mid]>=A[l]) l=mid+1;
    }
    return -1;
}
