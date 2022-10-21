#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int GCD(int A, int B) {
  while (A >= 1 && B >= 1) {
    if (A >= B) {
      A = (A % B);
    } else {
      B = (B % A);
    }
  }
  if (A != 0)
    return A;
  return B;
}

int main() {
  int A, B;
  cin >> A >> B;
  cout << GCD(A, B) << endl;
  return 0;
}
