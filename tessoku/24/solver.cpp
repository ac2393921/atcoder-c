#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int N, A[100009];
int L[100009], LEN;

int main() {
  cin >> N;
  rep(i, 0, N) cin >> A[i];
  L[0] = A[0];
  LEN = 1;

  rep(i, 1, N) {
    int pos = lower_bound(L, L + LEN, A[i]) - L;
    L[pos] = A[i];
    if (pos >= LEN) {
      LEN += 1;
    }
  }
  cout << LEN << endl;
  return 0;
}
