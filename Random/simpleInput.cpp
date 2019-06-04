// Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative.
//
// Input Format:
// A list of integers to be processed
//
// Constraints:
// All numbers input are integers between -1000 and 1000.
//
// Output Format
// Print all the numbers before the cumulative sum become negative.
//
// Sample Input
// 1
// 2
// 88
// -100
// 49
// Sample Output
// 1
// 2
// 88

#include<iostream>
using namespace std;
int main() {

	int run=true;
	int sum=0;
	while(run){
		int num;
		cin >> num;
		if(sum+num<0){
			run=false;
		}else{
			cout << num << endl;
			sum+=num;
		}
	}
	return 0;
}
