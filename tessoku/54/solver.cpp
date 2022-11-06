#include <bits/stdc++.h>
#include <sys/wait.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int Q, q[100009], y[100009];
string x[100009];
map<string, int> Map;

int main() {
  cin >> Q;
  rep(i, 0, Q) {
    cin >> q[i];
    if (q[i] == 1)
      cin >> x[i] >> y[i];
    if (q[i] == 2)
      cin >> x[i];
  }

  rep(i, 0, Q) {
    if (q[i] == 1)
      Map[x[i]] = y[i];
    else
      cout << Map[x[i]] << endl;
  }

  return 0;
}
