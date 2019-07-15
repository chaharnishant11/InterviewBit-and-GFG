#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int matrix(vector<int>& A, int N);
int main() {
	//code
	int T;
	cin >> T;
	while (T-- > 0) {
	    int N;
	    cin >> N;
	    vector<int> A(N);
	    for (int i = 0; i < N; i++) {
	        cin >> A[i];
	    }
	    cout << matrix(A, N) << endl;
	}
	return 0;
}
int matrix(vector<int>& A, int N) {
    if (N < 3) return 0;
    if (N == 3) return A[0] * A[1] * A[2];
    vector<vector<int>> B(N, vector<int>(N, 0));
    for (int i = N - 3; i >= 0; i--) {
        for (int j = i + 2; j < N; j++) {
            int m = INT_MAX;
            for (int k = j - 1; k > i; k--) {
                m = min(m, B[i][k] + A[i] * A[k] * A[j] + B[k][j]);
            }
            if (m != INT_MAX) {
                B[i][j] = m;
            }
        }
    }
    return B[0][N-1];
}
