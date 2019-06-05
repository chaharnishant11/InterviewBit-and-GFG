#include <iostream>
using namespace std;


void wavePrint(int a[][1000], int n, int m){

    int i=0,j=0,k=0;
    int max=n*m;
    bool top=true;
    while(k<max){
        if(top && i<n){
            cout << a[i++][j] << " ";
            if(i==n){
                top=false;
                j++;
                i--;
            }
        }else{
            cout << a[i--][j] << " " ;
            if(i==-1){
                top=true;
                i++;
                j++;
            }
        }
        k++;
    }

}
int main() {
    int input[1500][1000];
    int row, col;
    cin >> row >> col;

    for(int i = 0; i < row; i++) {
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    wavePrint(input, row, col);
}
