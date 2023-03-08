#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int count_permutation_subsequences(vector<int>& A) {
int n = A.size();
vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
for (int i = 0; i <= n; i++) {
dp[i][0] = 1;
}




for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        dp[i][j] = dp[i-1][j-1];
        if (A[i-1] > j) {
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
        }
    }
}

int res = 0;
for (int i = 1; i <= n; i++) {
    res = (res + dp[n][i]) % MOD;
}

return res;
}

int main() {
int t;
cin >> t;
while (t--) {
int n;
cin >> n;
vector<int> A(n);
for (int i = 0; i < n; i++) {
cin >> A[i];
}
cout << count_permutation_subsequences(A) << endl;
}
return 0;
}