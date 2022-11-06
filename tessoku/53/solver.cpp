#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int Q, q[100009];
int x[100009];
priority_queue<int, vector<int>, greater<int>> T;

int main() {
  cin >> Q;
  rep(i, 0, Q) {
    cin >> q[i];
    if (q[i] == 1)
      cin >> x[i];
  }

  rep(i, 0, Q) {
    if (q[i] == 1)
      T.push(x[i]);
    else if (q[i] == 2)
      cout << T.top() << endl;
    else
      T.pop();
  }
  return 0;
}
