#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int N;
char C, A[2000009];

int main() {
  cin >> N >> C;
  rep(i, 0, N) cin >> A[i];

  int s = 0;
  rep(i, 0, N) {
    if (A[i] == 'W')
      s += 0;
    if (A[i] == 'B')
      s += 1;
    if (A[i] == 'R')
      s += 2;
  }

  if (s % 3 == 0 && C == 'W')
    cout << "Yes" << endl;
  else if (s % 3 == 1 && C == 'B')
    cout << "Yes" << endl;
  else if (s % 3 == 2 && C == 'R')
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
