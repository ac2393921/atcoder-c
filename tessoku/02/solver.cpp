// template for atcoder beginners
// when you create a *.cpp file, this template is loaded

#include <iostream>
using namespace std;

int n, x, a[109];
bool answer = false;

int main() {
  cin >> n >> x;
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  for (int i = 1; i <= n; i++) {
    if (a[i] == x)
      answer = true;
  }

  if (answer == true)
    cout << "yes" << endl;
  else
    cout << "no" << endl;
  return 0;
}
