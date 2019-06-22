long helper(int num[],int freq[],int n,int fact[]){
    if(n==0 || n==1){
        return 0;
    }
    int ans=0;
    int d=1;
    for(int i=0;i<10;i++){
        if(freq[i]>0){
            d*=fact[freq[i]];
        }
    }
    for(int i=num[0]+1;i<10;i++){
        if(freq[i]>0){
            int a=fact[n-1];
            int m=((a*freq[i])/d);
            ans+=m;
        }
    }
    freq[num[0]]--;
    ans+=helper(num+1,freq,n-1,fact);
    return ans;
}



long numberOfNumbersWithDuplicates(long num){
	// Write your code here
    int n=0;
    long i=num;
    while(i!=0){
        n++;
        i/=10;
    }
    int a[n];
    i=num;
    for(int j=n-1;j>=0;j--){
        a[j]=i%10;
        i/=10;
    }
    int freq[10]={0};
    for(int j=0;j<n;j++){
        freq[a[j]]++;
    }
    int fact[n+1];
    fact[0]=1;
    for(int c=0;c<n+1;c++){
        fact[c+1]=fact[c]*(c+1);
    }
    return helper(a,freq,n,fact);
}
