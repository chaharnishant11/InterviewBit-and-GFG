void countDistinct(int A[], int k, int n)
{
    //Your code here
    int i=0,j=k-1;
    while(j<n){
        map<int,int> m;
        for(int s=i;s<=j;s++){
            m[A[s]]++;
        }
        int c=0;
        for(int s=i;s<=j;s++){
            if(m[A[s]]>=1){
                c++;
                m[A[s]]=0;
            }
        }
        cout << c << " ";
        i++,j++;
    }
}
