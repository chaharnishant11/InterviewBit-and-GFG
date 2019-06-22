void helper(int input[],int n,int a[],int s){
    if(n==0){
        for(int i=0;i<s;i++){
            cout << a[i] << " ";
    }
        cout << endl;
        return;
    }
    helper(input+1,n-1,a,s);
    a[s]=input[0];
    helper(input+1,n-1,a,s+1);

}


void printSubsetsOfArray(int input[], int n) {
	// Write your code here
   int a[n];
    helper(input,n,a,0);
}
