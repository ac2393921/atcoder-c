#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

ll N, M, B, A[200009], C[200009];

int main() {
  cin >> N >> M >> B;
  rep(i, 0, N) cin >> A[i];
  rep(i, 0, M) cin >> C[i];

  ll ans = 0;
  rep(i, 0, N) ans += A[i] * M;
  rep(i, 0, M) ans += C[i] * N;
  ans += B * N * M;
  cout << ans << endl;
}
