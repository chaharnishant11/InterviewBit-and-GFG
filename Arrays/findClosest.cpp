#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T)
    {
        int N,K;
        cin>>N>>K;
        vector<int> arr;
        int min=0,diff,diff2;
        for(int i=0;i<N;i++)
        {
            long int x;
            cin>>x;
            arr.push_back(x);
        }
        for(int i=0;i<N;i++)
        {
            if(K>arr[N-1])
            {
                cout<<arr[N-1]<<endl;
                break;
            }
            else if(K<arr[0])
            {
                cout<<arr[0]<<endl;
                break;
            }
            else if(arr[i]==K)
            {
                cout<<arr[i]<<endl;
                break;
            }
            else if(arr[i]>K)
            {
                diff=arr[i]-K;
               // cout<<"diff is"<<diff<<endl;
                diff2=K-arr[i-1];
                //cout<<"diff2 is"<<diff2<<endl;
                if(diff<=diff2)
                {
                    min=arr[i];
                    cout<<arr[i]<<endl;
                    break;
                }
                else
                {
                    min=arr[i-1];
                    cout<<arr[i-1]<<endl;
                    break;
                }
            }
        }

        T--;
    }
    return 0;
}
