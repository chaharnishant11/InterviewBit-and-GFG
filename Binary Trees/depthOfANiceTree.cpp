int helper(char str[],int n){
    if(str[0]=='l'){
        return 0;
    }
    int cn=0;
    int cl=0;
    int i=1;
    for(;i<n;i++){
        if(str[i]=='n') cn++;
        if(str[i]=='l') cl++;
        if(cl>cn) break;
    }
    return max(helper(str+1,i),helper(str+i+1,n-i-1))+1;
}


int depth(char str[]) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    return helper(str,strlen(str));
}
