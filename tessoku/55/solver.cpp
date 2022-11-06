#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int Q, q[100009], x[100009];
set<int> T;

int main() {
  cin >> Q;
  rep(i, 0, Q) { cin >> q[i] >> x[i]; }

  rep(i, 0, Q) {
    if (q[i] == 1)
      T.insert(x[i]);
    else if (q[i] == 2)
      T.erase(x[i]);
    else {
      auto itr = T.lower_bound(x[i]);
      if (itr == T.end())
        cout << "-1" << endl;
      else
        cout << (*itr) << endl;
    }
  }
  return 0;
}
