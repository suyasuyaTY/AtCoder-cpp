#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#include <atcoder/all>

using namespace std;

int main() {
  int H, I = 0;
  ;
  cin >> H;
  for (int i = 0;; i++) {
    I += 1 << i;
    if (I > H) {
      cout << i + 1 << endl;
      break;
    }
  }
}