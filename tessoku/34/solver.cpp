#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int N, X, Y, A[100009];
int grundy[100009];

int main() {
  cin >> N >> X >> Y;
  rep(i, 0, N) cin >> A[i];

  rep(i, 0, 100001) {
    bool t[3] = {false, false, false};
    if (i >= X)
      t[grundy[i - X]] = true;
    if (i >= Y)
      t[grundy[i - Y]] = true;
    if (t[0] == false)
      grundy[i] = 0;
    else if (t[1] == false)
      grundy[i] = 1;
    else
      grundy[i] = 2;
  }

  int xor_sum = 0;
  rep(i, 0, N) xor_sum = (xor_sum ^ grundy[A[i]]);
  if (xor_sum != 0)
    cout << "First" << endl;
  if (xor_sum == 0)
    cout << "Second" << endl;
}
