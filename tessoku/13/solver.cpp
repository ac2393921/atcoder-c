#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int N, K, A[100009];
int R[100009];

int main() {
  cin >> N >> K;
  rep(i, N) cin >> A[i];

  rep(i, N - 1) {
    if (i == 0)
      R[i] = 0;
    else
      R[i] = R[i - 1];

    while (R[i] < N - 1 && A[R[i] + 1] - A[i] <= K) {
      R[i] += 1;
    }
  }

  ll ans = 0;
  rep(i, N - 1) ans += (R[i] - i);
  cout << ans << endl;
  return 0;
}
