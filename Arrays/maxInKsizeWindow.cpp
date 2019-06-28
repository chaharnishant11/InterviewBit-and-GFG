#include <iostream>
#include <deque>

using namespace std;

int arr[10000000];

void max_of_subarrays(int n, int k){

    deque<int> q;       // Defining the deque data structure.

    int i = 0;
    for(i = 0;i<k;i++){     // Running for the first k numbers

        while((!q.empty()) && (arr[i] >= arr[q.back()]))    // Store the biggest number at queue front always
            q.pop_back();

        q.push_back(i);

    }

    for(;i<n;i++){          // Sliding window technique

        cout << arr[q.front()] << " ";

        while((!q.empty()) && (q.front() <= i-k)) q.pop_front();    // Removing the front if it is no more in the range.

        while((!q.empty()) && (arr[i] >= arr[q.back()])) q.pop_back();  // Pop all the smaller numbers from back.

        q.push_back(i); // Push the current number index

    }

    cout << arr[q.front()] << endl;
    q.pop_front();
}


int main() {

	int t;
	cin >> t;       // Inputting the test cases

	while(t--){     // Exhausting all the test cases

	    int n, k;
	    cin >> n >> k;

	    for(int i = 0;i<n;i++) cin >> arr[i];

	    max_of_subarrays(n, k);

	}

	return 0;
}
