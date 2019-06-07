// Given an array of integers, sort the array into a wave like array and return it,
// In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....
//
// Example
//
// Given [1, 2, 3, 4]
//
// One possible answer : [2, 1, 4, 3]
// Another possible answer : [4, 1, 3, 2]


#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t=0;
	cin >> t;
	while(t-->0){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    sort(a,a+n);
	    if(n%2==0){
        for(int i=0;i<n-1;i+=2){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        }else{
            for(int i=0;i<n-2;i++){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                i++;
            }
        }
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
	}
	return 0;
}
