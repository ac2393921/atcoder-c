#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

#include <iostream>
#include <vector>
using namespace std;

class UnionFind {
public:
  int par[100009];
  int siz[100009];

  void init(int N) {
    for (int i = 1; i <= N; i++)
      par[i] = -1;
    for (int i = 1; i <= N; i++)
      siz[i] = 1;
  }

  int root(int x) {
    while (true) {
      if (par[x] == -1)
        break;    // 親がなければroot
      x = par[x]; // 親に進む
    }
    return x;
  }

  void unite(int u, int v) {
    int RootU = root(u);
    int RootV = root(v);
    if (RootU == RootV)
      return; // uとvが同グループの時は処理を行わない
    if (siz[RootU] < siz[RootV]) {
      par[RootU] = RootV;
      siz[RootV] = siz[RootU] + siz[RootV];
    } else {
      par[RootV] = RootU;
      siz[RootU] = siz[RootU] + siz[RootV];
    }
  }

  bool same(int u, int v) {
    if (root(u) == root(v))
      return true;
    return false;
  }
};

int N, M;
int A[100009], B[100009], C[100009];
UnionFind uf;
int main() {
  cin >> N >> M;
  rep(i, 0, M) cin >> A[i] >> B[i] >> C[i];

  vector<pair<int, int>> E;
  rep(i, 0, M) E.push_back(make_pair(C[i], i));
  sort(E.begin(), E.end());

  int ans = 0;
  uf.init(N);
  rep(i, 0, M) {
    int idx = E[i].second;
    if (uf.same(A[idx], B[idx]) == false) {
      uf.unite(A[idx], B[idx]);
      ans += C[idx];
    }
  }

  cout << ans << endl;
  return 0;
}
