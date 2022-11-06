#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int N, X[159], Y[159];
int P[159];

double Randouble() { return 1.0 * rand() / RAND_MAX; }

int RandInt(int a, int b) { return a + rand() % (b - a + 1); }

double GetDistance(int p, int q) {
  return sqrt((X[p] - X[q]) * (X[p] - X[q]) + (Y[p] - Y[q]) * (Y[p] - Y[q]));
}

double GetScore() {
  double sum = 0;
  rep(i, 0, N) sum += GetDistance(P[i], P[i + 1]);
  return sum;
}

int main() {
  cin >> N;
  rep(i, 0, N) cin >> X[i] >> Y[i];

  P[0] = 1;
  P[N] = 1;
  rep(i, 1, N) P[i] = i + 1;

  double CuurentScore = GetScore();
  rep(t, 1, 200001) {
    int L = RandInt(1, N - 1);
    int R = RandInt(1, N - 1);
    if (L > R)
      swap(L, R);
    reverse(P + L, P + R + 1);
    double NewScore = GetScore();
    double T = 30.00 - 28.00 * t / 200000.0;
    double Probability = exp(min(0.0, (CuurentScore - NewScore) / T));
    if (Randouble() < Probability)
      CuurentScore = NewScore;
    else
      reverse(P + L, P + R + 1);
  }

  rep(i, 0, N + 1) cout << P[i] << endl;
  return 0;
}
