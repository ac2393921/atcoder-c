#include <bits/stdc++.h>
#include <ostream>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int main() {
  ll N;
  ll A1, A2, A3;
  cin >> N;
  A1 = (N / 3);
  A2 = (N / 5);
  A3 = (N / 15);
  cout << (A1 + A2 - A3) << endl;
  return 0;
}
