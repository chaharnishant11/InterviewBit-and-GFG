int Solution::isPalindrome(int A) {
    int rev=0;
    int num =A;
    if(A<0){
        return 0;
    }if(A==0){
        return 1;
    }
    while(num!=0){
        int r=num%10;
        rev=rev*10+r;
        num/=10;
    }
    if(rev==A){
        return 1;
    }else{
        return 0;
    }
}
