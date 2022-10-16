#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int N, S, A[10009];
int dp[69][10009];

int main() {
  cin >> N >> S;
  rep(i, 0, N) cin >> A[i];

  dp[0][0] = true;
  rep(i, 1, N + 1) dp[0][1] = false;

  rep(i, 0, N + 1) {
    rep(j, 0, S + 1) {
      if (j < A[i]) {
        if (dp[i][j])
          dp[i + 1][j] = true;
        else
          dp[i + 1][j] = false;
      }
      if (j >= A[i]) {
        if (dp[i][j] || dp[i][j - A[i]])
          dp[i + 1][j] = true;
        else
          dp[i + 1][j] = false;
      }
    }
  }

  if (dp[N][S])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
