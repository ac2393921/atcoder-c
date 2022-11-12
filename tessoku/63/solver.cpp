#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int N, M, A[100009], B[100009];
int dist[100009];
vector<int> G[100009];
queue<int> Q;

int main() {
  cin >> N >> M;
  rep(i, 0, M) {
    cin >> A[i] >> B[i];
    G[A[i]].push_back(B[i]);
    G[B[i]].push_back(A[i]);
  }

  // 初期化
  rep(i, 0, N + 1) dist[i] = -1;

  Q.push(1);
  dist[1] = 0;
  while (!Q.empty()) {
    int pos = Q.front();
    Q.pop();
    rep(j, 0, G[pos].size()) {
      int to = G[pos][j];
      if (dist[to] == -1) {
        dist[to] = dist[pos] + 1;
        Q.push(to);
      }
    }
  }

  rep(i, 1, N + 1) cout << dist[i] << endl;
  return 0;
}
