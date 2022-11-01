#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int N, K;
int A[309], B[309];

int score(int a, int b) {
  int cnt = 0;
  rep(i, 0, N) {
    if (a <= A[i] && A[i] <= a + K && b <= B[i] && B[i] <= b + K)
      cnt += 1;
  }
  return cnt;
}

int main() {
  cin >> N >> K;
  rep(i, 0, N) cin >> A[i] >> B[i];

  int ans = 0;
  rep(a, 1, 101) {
    rep(b, 1, 101) {
      int s = score(a, b);
      ans = max(ans, s);
    }
  }

  cout << ans << endl;
  return 0;
}
