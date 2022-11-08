#include <algorithm>
#include <bits/stdc++.h>
#include <iterator>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> P(N);

  rep(i, 0, N) cin >> P[i];
  prev_permutation(begin(P), end(P));
  rep(i, 0, N) { cout << P[i] << " \n"[i + 1 == N]; }
}
