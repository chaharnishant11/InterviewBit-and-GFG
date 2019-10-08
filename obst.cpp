//Archit Aggarwal, NSIT
//architaggarwal0508@gmail.com
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void display(vector<vector<int>> dp) {
    for(int i = 0; i < dp.size(); i++) {
        for(int j = 0; j < dp[i].size(); j++) {
            cout << dp[i][j] << "\t";
        }
        cout << endl;
    }
}
int obst(vector<pair<int, int>> values, vector<int> usearch) {
    sort(values.begin(), values.end());
    /*for(int i = 0; i < values.size(); i++) {
        cout << values[i].first << " ";
    }
    cout << endl;
    for(int i = 0; i < values.size(); i++) {
        cout << values[i].second << " ";
    }*/
    vector<int> cumusearch(usearch.size() + 1, 0);
    for(int i = 1; i < usearch.size() + 1; i++) {
        cumusearch[i] = cumusearch[i - 1] + usearch[i - 1];
        cout << cumusearch[i] << " ";
    }
    cout << endl;
    cout << cumusearch.size() << endl;
    vector<int> cumfrequency(values.size() + 1, 0);
    for (int i = 1; i < cumfrequency.size(); i++) {
        cumfrequency[i] = cumfrequency[i - 1] + values[i - 1].second;
        //cout << cumfrequency[i] << " ";
    }
    vector<vector<int>> dp(values.size(), vector<int>(values.size()));
    for (int i = 0; i < dp.size(); i++) {
        dp[i][i] = values[i].second + usearch[i] + usearch[i + 1];
    }
    for (int gap = 1; gap < dp.size(); gap++) {
        for (int i = 0; i + gap < dp.size(); i++) {
            int j = i + gap;
            int minimum = INT_MAX;
            cout << i << " " << j << " ";
            for (int root = i; root <= j; root++) {
                cout << root << " ";
                int f1 = 0, f2 = 0;
                if (root != i) f1 = dp[i][root - 1]; //cout << f1 << " "; 
                if (root != j) f2 = dp[root + 1][j]; //cout << f2 << endl;
                minimum = min(minimum, f1 + f2);
                cout << minimum << " ";
            }
            cout << endl;
            //cout << minimum << endl;
            dp[i][j] = minimum + (cumfrequency[j + 1] - cumfrequency[i]) + (cumusearch[j + 2] - cumusearch[i]);
        }
    }
    display(dp);
    return dp[0][dp.size() - 1];
}
int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> input(N);
    vector<int> usinput(N + 1);
    for (int i = 0; i < N; i++) {
        cin >> input[i].first;
    }
    for (int i = 0; i < N; i++) {
        cin >> input[i].second;
    }
    for (int i = 0; i < N + 1; i++) {
        cin >> usinput[i];
    }
    cout << obst(input, usinput);
}