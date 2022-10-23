#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

ll power(ll a, ll b, ll m) {
  ll p = a, ans = 1;
  rep(i, 0, 30) {
    ll wari = (1 << i);
    if ((b / wari) % 2 == 1) {
      ans = (ans * p) % m;
    }
    p = (p * p) % m;
  }
  return ans;
}

ll division(ll a, ll b, ll m) { return (a * power(b, m - 2, m)) % m; }

int main() {
  const ll M = 1000000007;
  ll n, r;
  cin >> n >> r;

  ll a = 1;
  rep(i, 1, n + 1) { a = (a * i) % M; }

  ll b = 1;
  rep(i, 1, r + 1) { b = (b * i) % M; }
  rep(i, 1, n - r + 1) { b = (b * i) % M; }

  cout << division(a, b, M);
  return 0;
}
