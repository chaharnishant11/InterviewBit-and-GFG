#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int g[MAX][MAX];
int main()
{
    int t;cin>>t;
    while(t--){
        int V,c=0,odd=0;cin>>V;
        for(int i=0;i<V;i++){
            c=0;
              for(int j=0;j<V;j++){
                  int x;
                  cin>>x;
      	          g[i][j]=x;
                  if(x)c++;
    	    }
    	    if(c%2)odd++;
        }
        if(odd==2)
            cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}
