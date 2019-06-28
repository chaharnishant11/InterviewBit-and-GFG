void insert(int input[],int n){
    int ci=n;
    int p=(ci-1)/2;
    while(p>=0){
        if(input[p]>input[ci]){
            int temp=input[p];
            input[p]=input[ci];
            input[ci]=temp;
        }else{
            break;
        }
        ci=p;
        p=(ci-1)/2;
    }
}

void remove(int input[],int s){
    int temp=input[s-1];
    input[s-1]=input[0];
    input[0]=temp;
    s--;
    int p=0;
    int lc=2*p+1;
    int rc=2*p+2;
    int mi;
    while(lc<s){
        mi=p;
        if(input[mi]>input[lc]){
            mi=lc;
        }if(rc<s && input[mi]>input[rc]){
            mi=rc;
        }if(p==mi) break;
        int temp=input[mi];
        input[mi]=input[p];
        input[p]=temp;
        p=mi;
        lc=2*p+1;
        rc=2*p+2;
    }
}

void inplaceHeapSort(int input[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the given input itself.
     * Taking input and printing output is handled automatically.
     */

    int i=1;
    int ci=i;
    while(i<n){
        insert(input,i);
        i++;
    }
    int s=n;
    while(s>0){
        remove(input,s);
        s--;
    }
}
