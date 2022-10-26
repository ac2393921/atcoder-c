#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

ll N, A[100009];
char T[100009];

ll ans = 0;

int main() {
  cin >> N;
  rep(i, 0, N) cin >> T[i] >> A[i];

  rep(i, 0, N) {
    if (T[i] == '+')
      ans += A[i];
    if (T[i] == '-')
      ans -= A[i];
    if (T[i] == '*')
      ans *= A[i];

    if (ans < 0)
      ans += 10000;

    ans = ans % 10000;
    cout << ans << endl;
  }
}
