using namespace std;

 int lis(int arr[], int n) {


	/*Write your code here.
	 *Don't write main().
	 *Don't take input, it is passed as function argument.
	 *Don't print output.
	 *Taking input and printing output is handled automatically.
	*/
   int *o= new int[n];
   o[0]=1;
   int biggest=0;
   for(int x=1;x<n;x++)
   {
     int big=0;
     for(int y=x-1;y>=0;y--)
     {
       if(arr[y]<arr[x])
         big=max(big,o[y]);
     }
     if(big!=0)
     	o[x]=big+1;
     else
       o[x]=1;
     biggest=max(biggest,o[x]);
   }
   return biggest;
 }
