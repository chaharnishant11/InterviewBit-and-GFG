// josephus(n, k) = (josephus(n - 1, k) + k-1) % n + 1
// josephus(1, k) = 1

int josephus(int n, int k)
{
   //Your code here
   if(n==1){
       return 1;
   }
   return (josephus(n-1,k) + k-1)%n + 1;
}
