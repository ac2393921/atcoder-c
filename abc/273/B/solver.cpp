#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int main() {
  ll X;
  int K;
  cin >> X >> K;
  ll t = 1;

  rep(i, 0, K) {
    int d = X / t % 10;
    t *= 10;
    X = X / t * t;
    if (d >= 5)
      X += t;
  }
  cout << X << endl;
  return 0;
}
