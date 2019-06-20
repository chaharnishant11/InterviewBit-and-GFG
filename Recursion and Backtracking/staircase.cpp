int staircase(int n){
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    if(n<=0){
        return 0;
    }if(n==1){
        return 1;
    }if(n==2){
        return 2;
    }if(n==3){
        return 4;
    }
    return staircase(n-1)+staircase(n-2)+staircase(n-3);

}
