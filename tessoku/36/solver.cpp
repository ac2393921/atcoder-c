#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int N, K;

int main() {
  cin >> N >> K;

  if ((N - 1) * 2 > K) {
    cout << "No" << endl;
  } else if (K % 2 == 1) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }

  return 0;
}
