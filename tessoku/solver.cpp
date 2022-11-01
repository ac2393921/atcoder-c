#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int N, L, A[200009];
char B[200009];

int main() {
  cin >> N >> L;
  rep(i, 0, N) cin >> A[i] >> B[i];

  int ans = 0;
  rep(i, 0, N) {
    if (B[i] == 'E') {
      ans = max(ans, L - A[i]);
    } else {
      ans = max(ans, A[i]);
    }
  }
  cout << ans << endl;
  return 0;
}
