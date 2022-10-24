#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
using ll = long long;

int N, A, B;
int dp[100009];

int main() {
  cin >> N >> A >> B;

  rep(i, 0, N + 1) {
    if (i >= A && dp[i - A] == false)
      dp[i] = true;
    else if (i >= B && dp[i - B] == false)
      dp[i] = true;
    else
      dp[i] = false;
  }

  if (dp[N] == true)
    cout << "First" << endl;
  else
    cout << "Second" << endl;
  return 0;
}
