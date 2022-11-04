#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int f(int k) {
  if (k == 0)
    return 1;
  return k * f(k - 1);
}

int main() {
  int N;
  cin >> N;
  cout << f(N) << endl;
}
