#include <bits/stdc++.h>
#include <chrono>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int main() {
  int N, A[100009], B[100009];
  int dp[100009];

  cin >> N;
  rep(i, 1, N) cin >> A[i];
  rep(i, 1, N) cin >> B[i];

  rep(i, 0, N) dp[i] = -1000000000;
  dp[1] = 0;

  rep(i, 1, N) {
    dp[A[i]] = max(dp[A[i]], dp[i] + 100);
    dp[B[i]] = max(dp[B[i]], dp[i] + 150);
  }

  cout << dp[N] << endl;
  return 0;
}
