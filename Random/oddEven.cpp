// Due to growing Traffic Problem Kejriwal wants to devise a new scheme. The scheme is as follows, each car will be allowed to run on Sunday if the sum of digits which are even is divisible by 4 or sum of digits which are odd in that number is divisible by 3. However to check every car for the above criteria can't be done by the Delhi Police. You need to help Delhi Police by finding out if a car numbered N will be allowed to run on Sunday?
//


#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t-->0){
        int num;
        cin >> num;
        int sume=0;
        int sumo=0;
        int r=0;
        while(num>0){
            r=num%10;
            if(r%2==0){
                sume+=r;
            }else{
                sumo+=r;
            }
            num=num/10;
        }
        if(sume%4==0 || sumo%3==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
	return 0;
}
