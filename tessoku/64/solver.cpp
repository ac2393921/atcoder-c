#include <bits/stdc++.h>
#include <cstdio>
#include <functional>
#include <utility>
#include <vector>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int N, M, A[100009], B[100009], C[100009];
vector<pair<int, int>> G[100009];

// ダイクストラ法
int cur[100009];
bool kakutei[100009];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>
    Q;

int main() {
  cin >> N >> M;
  rep(i, 0, M) {
    cin >> A[i] >> B[i] >> C[i];
    G[A[i]].push_back(make_pair(B[i], C[i]));
    G[B[i]].push_back(make_pair(A[i], C[i]));
  }

  rep(i, 0, N + 1) kakutei[i] = false;
  rep(i, 0, N + 1) cur[i] = 2000000000;

  // スタート地点をキューに追加
  cur[1] = 0;
  // (距離, pos)
  Q.push(make_pair(cur[1], 1));

  // ダイクストラ法
  while (!Q.empty()) {
    // 次に確定させるべき頂点を求める
    int pos = Q.top().second;
    Q.pop();

    // Q の最小要素が既に確定した頂点の場合
    if (kakutei[pos] == true)
      continue;

    // cur[x]の値を更新する
    kakutei[pos] = true;
    rep(i, 0, G[pos].size()) {
      int nex = G[pos][i].first;
      int cost = G[pos][i].second;
      if (cur[nex] > cur[pos] + cost) {
        cur[nex] = cur[pos] + cost;
        Q.push(make_pair(cur[nex], nex));
      }
    }
  }

  rep(i, 1, N + 1) {
    if (cur[i] == 2000000000)
      cout << "-1" << endl;
    else
      cout << cur[i] << endl;
  }
  return 0;
}
