#include <bits/stdc++.h>
#include <stack>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int main() {
  int Q;
  int q[100009];
  string b[100009];
  cin >> Q;
  rep(i, 0, Q) {
    cin >> q[i];
    if (q[i] == 1)
      cin >> b[i];
  }

  stack<string> S;
  rep(i, 0, Q) {
    if (q[i] == 1)
      S.push(b[i]);
    else if (q[i] == 2)
      cout << S.top() << endl;
    else
      S.pop();
  }
  return 0;
}
