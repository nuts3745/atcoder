#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追記
  string op;
  int B;
  int ans = A;
  rep (i, N) {
      cin >> op >> B;
      if (op == "+") ans += B;
      else if (op == "-") ans -= B;
      else if (op == "*") ans *= B;
      else if (op == "/") {
          if (B == 0) {
            cout << "error" << endl;
            break;
          }
          else ans /= B;
      }

      cout << i+1 << ":" << ans << endl;
    }
}
