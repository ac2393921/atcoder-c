#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int N;
  cin >> N;

  for (int x = 9; x >= 0; x--) {
    int w = (1 << x);
    cout << (N / w) % 2;
  }
  cout << endl;
  return 0;
}
