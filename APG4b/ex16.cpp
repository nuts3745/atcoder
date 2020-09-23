#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  bool flag = false;
  for (int i = 0; i < 5; i++)
  {
    int a = data.at(i);
    if (i > 0) {
        int bf = data.at(i-1);
        if (a == bf) flag = true;
    }
    if (i < 4) {
        int af = data.at(i+1);
        if (a == af) flag = true;
    }
  }
  if (flag) cout << "YES" << endl;
  else cout << "NO" << endl;
}
