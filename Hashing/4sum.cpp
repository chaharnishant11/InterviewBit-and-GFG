// O(n^4) approach

#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    unordered_map<string,int> m1;
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    sort(arr,arr+n);
	    string curr="";
	    for(int i=0;i<n-3;i++){
	        for(int j=i+1;j<n-2;j++){
	            for(int k=j+1;k<n-1;k++){
	                for(int l=k+1;l<n;l++){
	                    if(arr[i]+arr[j]+arr[k]+arr[l]==x){
	                        curr = to_string(arr[i])+to_string(arr[j])+to_string(arr[k])+to_string(arr[l]);
	                        if(m1[curr]==0){
	                            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<" "<<"$";
	                            m1[curr]++;

	                        }
	                    }
	                }
	            }
	        }
	    }
	    if(curr=="")
	        cout<<-1<<endl;
	    else cout<<endl;
	}
	return 0;
}

//Two Pointer approach


vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
   sort(A.begin(), A.end());
   vector <vector <int> > res;
   res.clear();
   set <vector<int> > ss;
   ss.clear();
   int n =  A.size();

   for (int i = 0; i < n - 3; i++) {
       for (int j = i + 1; j < n-2; j++) {
           int left = j + 1;
           int right = n - 1;

           while (left < right) {
               if (A[i] + A[j] + A[left] + A[right] == B) {
                   vector <int> temp{A[i],A[j],A[left], A[right]};
                   if (ss.find(temp) == ss.end()) {
                       res.push_back(temp);
                       ss.insert(temp);
                   }
                   left++;
                   right--;
               }else if(A[i] + A[j] + A[left] + A[right] < B) {
                   left++;
               } else  {
                   right--;
               }
           }
       }
   }

   sort(res.begin(),res.end());
   return res;
}
