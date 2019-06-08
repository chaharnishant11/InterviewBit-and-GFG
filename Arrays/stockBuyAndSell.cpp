#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Interval{
  int buy;
  int sell;
};

int main() {
	//code
	int t=0;
	cin>>t;
	while(t-->0){
	    int n;
	    cin >> n;
	    int price[n];
	    for(int i=0;i<n;i++){
	        cin >> price[i];
	    }
	    Interval sol[n/2 +1];
	    int count=0;
	    int i = 0;
        while (i < n - 1) {
            while ((i < n - 1) && (price[i + 1] <= price[i]))
                i++;
            if (i == n - 1)
                break;
            sol[count].buy = i++;
            while ((i < n) && (price[i] >= price[i - 1]))
                i++;
            sol[count].sell = i - 1;
            count++;
        }
        if(count == 0){
            cout << "No Profit";
        }else{
            for(int j=0;j<count;j++){
                cout << "(" << sol[j].buy << " " << sol[j].sell << ") ";
            }
        }

        cout << endl;
	}
	return 0;
}
