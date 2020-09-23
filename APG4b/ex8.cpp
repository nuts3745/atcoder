#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  int price;
  int N;
  cin >> p;

  // パターン1
  if (p == 1) {
    cin >> price;
  }

  // パターン2
  else if (p == 2) {
    string text;
    cin >> text >> price;
    cout << text << "!" << endl;
  }

  cin >> N;

  cout << price * N << endl;
}
