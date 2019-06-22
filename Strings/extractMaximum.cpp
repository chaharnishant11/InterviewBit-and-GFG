#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
     char a[999999];
     int max=0;
     scanf("%s",a);
     int i=0;
     int n=strlen(a);
     int s1=0;
     while(i<n){
         if(a[i]>='0' && a[i]<='9'){
             char c=a[i];
             int x=(int)c-48;
             s1=s1*10+x;
             if(max<s1)max=s1;
         }
         else
             s1=0;
         i++;
     }

     cout<<max<<endl;
     fflush(stdin);
 }
 return 0;
}
