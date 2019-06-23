#include <iostream>
using namespace std;

void helper(int n,int i){
    if(i>n){
        return;
    }
    cout << i << endl;
    for(int j=0;j<10;j++){
        //cout << i << endl;
        helper(n,i*10+j);
    }
    return;
}

void lexicographicalOrder(int num){
	// Write your code here
    for(int i=1;i<10;i++){
        helper(num,i);
    }
}
