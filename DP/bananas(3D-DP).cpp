#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the maximumBananas function below.

int dp[3][105][105];

int maximumBananas(vector<int> a, vector<int> b, vector<int> c, int k) {
    int n = a.size();
    // memset(dp, -1, sizeof(dp));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= k; j++) {
            dp[i][j][0] = 0;
        }

    }
    int maxSoFar = 0;

        for (int j = 0; j <= k; j++) {
            for (int l = 1; l <= n; l++) {
                for (int i = 0; i < 3; i++) {
                int noOfBananasOnFloor = (i == 0) ? a[l-1] : (i == 1) ? b[l-1] : c[l-1];
                dp[i][j][l] = dp[i][j][l-1] + noOfBananasOnFloor;
                if (j > 0) {
                    if (i == 1) {
                        dp[i][j][l] = max(dp[i][j][l], dp[0][j-1][l-1] + noOfBananasOnFloor);
                        dp[i][j][l] = max(dp[i][j][l], dp[2][j-1][l-1] + noOfBananasOnFloor);
                    }
                    if (i == 2) {
                        dp[i][j][l] = max(dp[i][j][l], dp[1][j-1][l-1] + noOfBananasOnFloor);
                    }
                    if (i == 0) {
                        dp[i][j][l] = max(dp[i][j][l], dp[1][j-1][l-1] + noOfBananasOnFloor);
                    }
                }
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= k; j++) {
            maxSoFar = max(dp[i][j][n], maxSoFar);
        }
    }

    return maxSoFar;

    // for(int i = 0; i <)
}
