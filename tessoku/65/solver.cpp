#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int n, a[100009], dp[100009];
vector<int> g[100009];

int main() {
  cin >> n;
  rep(i, 2, n + 1) {
    cin >> a[i];
    // 「上司→部下」の方向に辺を追加
    g[a[i]].push_back(i);
  }

  for (int i = n; i >= 1; i--) {
    dp[i] = 0;
    rep(j, 0, g[i].size()) { dp[i] += (dp[g[i][j]] + 1); }
  }

  rep(i, 1, n + 1) {
    if (i >= 2)
      cout << " ";
    cout << dp[i];
  }
  cout << endl;
  return 0;
}
