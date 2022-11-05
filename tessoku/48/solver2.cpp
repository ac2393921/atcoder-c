#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int N, X[159], Y[159];
int P[159];

int RandInt(int a, int b) { return a + rand() % (b - a + 1); }

double GetDistance(int p, int q) {
  return sqrt((X[p] - X[q]) * (X[p] - X[q]) + (Y[p] - Y[q]) * (Y[p] - Y[q]));
}

double GetScore() {
  double sum = 0;
  rep(i, 1, N + 1) sum += GetDistance(P[i], P[i + 1]);
  return sum;
}

int main() {
  cin >> N;
  rep(i, 1, N + 1) cin >> X[i] >> Y[i];

  P[1] = 1;
  P[N + 1] = 1;
  rep(i, 2, N + 1) P[i] = i;
  // 山登り法
  double CurrentScore = GetScore();
  rep(t, 0, 200000) {
    int L = RandInt(2, N);
    int R = RandInt(2, N);
    if (L > R)
      swap(L, R);

    reverse(P + L, P + R + 1);
    double NewScore = GetScore();

    if (CurrentScore >= NewScore)
      CurrentScore = NewScore;
    else
      reverse(P + L, P + R + 1);
  }

  rep(i, 1, N + 2) cout << P[i] << endl;
  return 0;
}
