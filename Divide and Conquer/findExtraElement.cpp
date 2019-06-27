int findExtra(int a[],int b[],int n)
{
 //add code here.

   int s=0;
   int e=n-1;
   while(s<=e){
       int mid=(s+e)/2;
       if(a[mid]!=b[mid]){
           if(a[mid-1]!=b[mid-1]){
               e=mid-1;
           }else{
               return mid;
           }
       }else{
           s=mid+1;
       }
   }
}
