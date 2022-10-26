#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int N, A[100009];
int dp[2009][2009];

int main() {
  cin >> N;
  rep(i, 0, N) cin >> A[i];

  rep(i, 0, N) dp[N][i] = A[i];

  for (int i = N - 1; i >= 0; --i) {
    if (i % 2 == 1)
      rep(j, 0, i) dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]);
    else
      rep(j, 0, i) dp[i][j] = min(dp[i + 1][j], dp[i + 1][j + 1]);
  }

  cout << dp[1][0] << endl;
  return 0;
}
