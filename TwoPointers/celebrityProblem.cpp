int getId(int M[MAX][MAX], int n)
{
    //Your code here
    int a = 0;
    int b = n - 1;
    while (a < b)
    {
        if (M[a][b])
            a++;
        else
            b--;
    }
    for (int i = 0; i < n; i++)
    {
        if ( (i != a) && (M[a][i] || !M[i][a] ) )
            return -1;
    }

    return a;
}
