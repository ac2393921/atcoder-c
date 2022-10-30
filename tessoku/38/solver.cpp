#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int D, N;
int L[10009], R[10009], H[10009];
int dp[10009];

int main() {
  cin >> D >> N;
  rep(i, 0, N) cin >> L[i] >> R[i] >> H[i];
  rep(i, 0, D) dp[i] = 24;

  rep(i, 0, N) {
    rep(j, L[i] - 1, R[i]) { dp[j] = min(dp[j], H[i]); }
  }

  int ans = 0;
  rep(i, 0, D) { ans += dp[i]; }
  cout << ans << endl;
  return 0;
}
