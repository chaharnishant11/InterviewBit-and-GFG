#include <iostream>
using namespace std;

void spiralPrint(int a[][1000], int n, int m){
	int max=n*m;
    int rs=0,re=n-1,cs=0,ce=m-1;
    int k=0;
    while(k<max){
        for(int i=cs;i<=ce;i++){
            cout << a[rs][i] << " ";
            k++;
        }rs++;
        for(int i=rs;i<=re;i++){
            cout << a[i][ce] << " ";
            k++;
        }ce--;
        for(int i=ce;i>=cs;i--){
            cout << a[re][i] << " ";
            k++;
        }re--;
        for(int i=re;i>=rs;i--){
            cout << a[i][cs] << " ";
            k++;
        }cs++;
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
    spiralPrint(input, row, col);
}
