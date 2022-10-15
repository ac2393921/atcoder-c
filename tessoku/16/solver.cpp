#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, a, n) for (int i = a; i < (n); ++i)
using ll = long long;

int main() {
  int N, A[10009], B[10009];
  int d[10009];

  cin >> N;
  rep(i, 1, N) cin >> A[i - 1];
  rep(i, 2, N) cin >> B[i - 2];

  d[0] = 0;
  d[1] = A[0];
  for (int i = 2; i < N; ++i) {
    d[i] = min(d[i - 1] + A[i - 1], d[i - 2] + B[i - 2]);
  }

  cout << d[N - 1] << endl;
  return 0;
}
