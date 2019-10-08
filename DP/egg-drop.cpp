//Archit Aggarwal, NSIT
//architaggarwal0508@gmail.com
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int eggdrop(int eggs, int floors) {
    vector<vector<int>> dp(eggs, vector<int>(floors + 1));
    for(int j = 0; j < floors + 1; j++) {
        dp[0][j] = j;
    }
    for(int i = 0; i < eggs; i++) {
        dp[i][0] = 0;
    }
    for(int i = 1; i < eggs; i++) {
        for(int j = 1; j < floors + 1; j++) {
            int bestoption = j;
            for(int k = 1; k <= j; k++) {
                int bottombreak = dp[i - 1][k - 1];
                int topsurvive = dp[i][j - k];
                int worseoption = max(topsurvive, bottombreak);
                bestoption = min(bestoption, worseoption + 1);
            }
            dp[i][j] = bestoption;
        }
    }
    return dp[eggs - 1][floors];
}
int main(int argc, char const *argv[])
{
    cout << eggdrop(2, 36);
    return 0;
}