#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  // ここにプログラムを追記
  string apoint;
  string bpoint;

  rep(i, A) apoint += "]";
  rep(i, B) bpoint += "]";

  cout << "A:" << apoint << endl;
  cout << "B:" << bpoint << endl;
}
