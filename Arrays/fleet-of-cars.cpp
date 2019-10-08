#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}
int main() {
    ll int target;
    cin >> target;
    //cout << target << " ";
    ll int numofcars;
    cin >> numofcars;
    pair<int, int> array[numofcars];
    for (int i = 0; i < numofcars; i++) {
        cin >> array[i].first;
    }
    for (int i = 0; i < numofcars; i++) {
        cin >> array[i].second;
    }
    sort(array, array + numofcars, compare);
    /*for (int i = 0; i < numofcars; i++) {
        //cout << array[i].first << " " << array[i].second << endl;
    }*/
    int ans = 1;
    float curtime = (float)(target - array[numofcars - 1].first) / array[numofcars - 1].second;
    //cout << curtime << endl;
    for (int i = numofcars - 2; i >= 0; i--) {
        float remdist = (float)(target - array[i].first);
        float temptime = remdist / (float)array[i].second;
        //cout << temptime << endl;
        if (temptime > curtime) {
            ans++;
            curtime = temptime;
        }
    }
    cout << ans << endl;
}