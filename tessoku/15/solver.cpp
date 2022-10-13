#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int N, A[100009], B[100009];
  cin >> N;
  rep(i, N) cin >> A[i];

  vector<int> T;
  rep(i, N) T.push_back(A[i]);
  sort(T.begin(), T.end());

  T.erase(unique(T.begin(), T.end()), T.end());

  rep(i, N) {
    B[i] = lower_bound(T.begin(), T.end(), A[i]) - T.begin();
    B[i] += 1;
  }

  rep(i, N) {
    if (i >= 1)
      cout << " ";
    cout << B[i];
  }
}
