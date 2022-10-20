#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int H, W;
char C[39][39];
ll dp[39][39];

int main() {
  cin >> H >> W;
  rep(i, 0, H) {
    rep(j, 0, W) { cin >> C[i][j]; }
  }

  dp[1][1] = 1;
  rep(i, 1, H + 1) {
    rep(j, 1, W + 1) {
      if (i == 1 && j == 1) {
        continue;
      }

      if (C[i - 1][j - 1] != '#') {
        dp[i][j] = 0;
        dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
      }
    }
  }

  cout << dp[H][W] << endl;
  return 0;
}
