#include <iostream>
using namespace std;

void PushZeroesEnd(int a[], int n){

    int k=0;
    for(int i=0; i<n ;i++){
        if(a[i]!=0){
            int temp=a[k];
            a[k]=a[i];
            a[i]=temp;
            k++;
        }
    }

}
int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	PushZeroesEnd(input,size);
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";

	return 0;

}
