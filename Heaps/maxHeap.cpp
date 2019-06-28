
/***************
 * Following is the main function that er are using internally
 *

int main() {
    PriorityQueue pq;
    int choice;
    cin >> choice;
    while(choice != -1) {
        switch(choice) {
            case 1 : // insert
                int element;
                cin >> element;
                pq.insert(element);
                break;
            case 2 : // getMax
                cout << pq.getMax() << endl;
                break;
            case 3 : // removeMax
                cout << pq.removeMax() << endl;
                break;
            case 4 : // size
                cout << pq.getSize() << endl;
                break;
            case 5 : // isEmpty
                if(pq.isEmpty()) {
                    cout << "true" << endl;
                }
                else {
                    cout << "false" << endl;
                }
            default :
                return 0;
        }
        cin >> choice;
    }
}
*******************/

#include<bits/stdc++.h>
using namespace std;
class PriorityQueue {
    // Complete this class
    vector<int> pq;

    public :

    PriorityQueue() {

    }

    bool isEmpty() {
        return pq.size() == 0;
    }

    // Return the size of priorityQueue - no of elements present
    int getSize() {
        return pq.size();
    }

    int getMax(){
        if(isEmpty()) return -INT_MIN;
        return pq[0];
    }

    void insert(int x){
        pq.push_back(x);
        int c=pq.size()-1;
        int p=(c-1)/2;
        while(c>=0){
            if(pq[c]>pq[p]){
                int temp=pq[c];
                pq[c]=pq[p];
                pq[p]=temp;
                c=p;
                p=(c-1)/2;
            }else{
                break;
            }
        }
    }

    int removeMax(){
        if(isEmpty()) return INT_MIN;
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        int p=0;
        int lc=2*p+1;
        int rc=2*p+2;
        int mi;
        while(lc<pq.size()){
            mi=p;
            if(pq[mi] < pq[lc]) {
				mi = lc;
			}
			if(rc < pq.size() && pq[rc] > pq[mi]) {
				mi = rc;
			}
			if(mi == p) {
				break;
			}
            int temp=pq[mi];
            pq[mi]=pq[p];
            pq[p]=temp;
            p=mi;
            lc=2*p+1;
            rc=2*p+2;
        }
        return ans;
    }

};
