#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int N;
int A[100009];

int main() {
  cin >> N;
  rep(i, 0, N) cin >> A[i];

  int xor_sum = A[0];
  rep(i, 1, N) { xor_sum = (xor_sum ^ A[i]); }

  if (xor_sum != 0)
    cout << "First" << endl;
  else if (xor_sum == 0)
    cout << "Second" << endl;
}
