#include <bits/stdc++.h>
using namespace std;

int count(string input,int size){
    int* output = new int[size + 1];
	output[0] = 1;
	output[1] = 1;

	for (int i = 2; i <= size; i++) {
        output[i]=0;
		if(input[i-1]>'0'){
            output[i] = output[i-1];
        }
        int f=(input[i-2]-'0');
        int x=(input[i-1]-'0');
		if ((f*10+x)<=26 && (f*10+x)>=10){
			output[i] = (output[i]+output[i-2])%1000000007;
		}
	}
	int ans = output[size];
	delete [] output;
	return ans;
}

int main()
{
    string s;
    cin >> s;
    while(s!="0"){
        int ans=count(s,s.size());
        cout << ans << endl;
        cin >> s;
    }
    return 0;
}
