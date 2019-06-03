#include <iostream>
using namespace std;


int MissingNumber(int a[], int n){
    int element=a[0];
    for(int i=1; i<n;i++){
        element = element^a[i];
    }

    return element;
}

int main() {
	int size;
	cin >> size;
	int *input = new int[1 + size];

	for(int i = 0; i < size; i++)
		cin >> input[i];

	cout << MissingNumber(input, size);

	delete [] input;

	return 0;
}
