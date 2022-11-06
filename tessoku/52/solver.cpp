#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int Q, q[100009];
string n[100009];
queue<string> T;

int main() {
  cin >> Q;
  rep(i, 0, Q) {
    cin >> q[i];
    if (q[i] == 1)
      cin >> n[i];
  }

  rep(i, 0, Q) {
    if (q[i] == 1)
      T.push(n[i]);
    else if (q[i] == 2)
      cout << T.front() << endl;
    else
      T.pop();
  }
  return 0;
}
