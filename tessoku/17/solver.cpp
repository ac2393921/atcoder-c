#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int main() {
  int N, A[100009], B[100009];
  int d[100009], p;

  cin >> N;
  rep(i, 1, N) cin >> A[i - 1];
  rep(i, 2, N) cin >> B[i - 2];

  d[0] = 0;
  d[1] = A[0];
  for (int i = 2; i < N; ++i) {
    d[i] = min(d[i - 1] + A[i - 1], d[i - 2] + B[i - 2]);
  }

  p = N - 1;
  vector<int> ans;

  while (true) {
    ans.push_back(p + 1);
    if (p == 0)
      break;

    if (d[p - 1] + A[p - 1] == d[p])
      p -= 1;
    else
      p -= 2;
  }

  reverse(ans.begin(), ans.end());
  cout << ans.size() << endl;
  rep(i, 0, ans.size()) { cout << ans[i] << " "; }
  return 0;
}
