#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int N, K;
int A[1009], B[1009], C[1009], D[1009];
int P[1000009], Q[1000009];

int main() {
  cin >> N >> K;
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];
  rep(i, N) cin >> C[i];
  rep(i, N) cin >> D[i];

  rep(i, N) {
    rep(j, N) { P[i * N + j] = A[i] + B[j]; }
  }

  rep(i, N) {
    rep(j, N) { Q[i * N + j] = C[i] + D[j]; }
  }

  sort(Q + 1, Q + (N * N) + 1);

  rep(i, N * N) {
    int x = lower_bound(Q + 1, Q + (N * N) + 1, K - P[i]) - Q;
    if (x <= N * N && Q[x] == K - P[i]) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
