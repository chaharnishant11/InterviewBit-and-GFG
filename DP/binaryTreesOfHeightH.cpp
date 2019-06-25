long binaryTreesOfHeightH(int h){
    long *out= new long[h+1];
    out[0]=1;
    out[1]=1;

    for(int i=2;i<=h;i++){
        out[i]=((out[i-1]*out[i-1])%1000000007+(out[i-1]*out[i-2]*2)%1000000007)%1000000007;
    }
    return out[h];
}
