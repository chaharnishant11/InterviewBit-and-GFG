bool checkMaxHeap(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Taking input and printing output is handled automatically.
     */
    int p=0;
    int lc=2*p+1;
    int rc=2*p+2;
    while(p<n){
        if(lc>=n && rc>=n) break;
        if(lc<n && arr[lc]>arr[p]) return false;
        if(rc<n && arr[rc]>arr[p]) return false;
        p++;
        lc=2*p+1;
        rc=2*p+2;
    }
    return true;
}
