#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  string S;
  cin >> S;
  int ans = 1;
  rep(i, S.size()) {
    if (S.at(i) == '1') continue;
    else if (S.at(i) == '+') ans += 1;
    else if (S.at(i) == '-') ans -= 1;
  }
  cout << ans << endl;
}
