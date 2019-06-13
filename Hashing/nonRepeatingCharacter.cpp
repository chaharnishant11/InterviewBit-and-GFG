#include <bits/stdc++.h>
using namespace std;

int firstNonRepeating(char *str){
    pair<int, int> arr[256];

    for (int i = 0; str[i]; i++){
        (arr[str[i]].first)++;
        arr[str[i]].second = i;
    }

    int res = INT_MAX;
    for (int i = 0; i < NO_OF_CHARS; i++)
        if (arr[i].first == 1)
            res = min(res, arr[i].second);
    return res;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    char c[n];
	    cin >> c;
	    int index = firstNonRepeating(c);
        if (index == INT_MAX)
            cout << -1 << endl;
        else
            cout << c[index] << endl;
	}
	return 0;
}
