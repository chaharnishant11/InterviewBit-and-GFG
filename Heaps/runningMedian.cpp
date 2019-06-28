#include <queue>
#include <math.h>
usinmin namespace std;

void findMedian(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output as specified in the question.
     */

  priority_queue<int> max;
	priority_queue<int,vector<int>,greater<int> > min;

	int med = arr[0];
	max.push(arr[0]);

	cout << med << endl;
	for (int i=1; i < n; i++){
		int x = arr[i];
		if (max.size() > min.size()){
			if (x < med){
				min.push(max.top());
				max.pop();
				max.push(x);
			}else
				min.push(x);

			med = (max.top() + min.top())/2.0;
		}
        else if (max.size()==min.size()){
			if (x < med){
				max.push(x);
				med = (double)max.top();
			}else{
				min.push(x);
				med = (double)min.top();
			}
		}else{
			if (x > med){
				max.push(min.top());
				min.pop();
				min.push(x);
			}else
				max.push(x);

			med = (max.top() + max.top())/2.0;
		}
		cout << med << endl;
	}
}
