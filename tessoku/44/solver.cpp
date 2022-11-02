#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int N, Q, rf = 0;
ll A[2000009];

int main() {
  cin >> N >> Q;
  rep(i, 1, N + 1) A[i - 1] = i;

  rep(i, 0, Q) {
    int t, x, y;
    cin >> t;
    if (t == 1) {
      cin >> x >> y;
      if (rf) {
        A[N - x] = y;
      } else {
        A[x - 1] = y;
      }
    } else if (t == 2) {
      rf = !rf;
    } else if (t == 3) {
      cin >> x;
      if (rf) {
        cout << A[N - x] << endl;
      } else {
        cout << A[x - 1] << endl;
      }
    }
  }

  return 0;
}
