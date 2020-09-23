#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int ctoi(const char c){
  int n = -1;
  sscanf(&c, "%1d", &n);
  return n;
}

int main() {
    string n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n.length(); i++)
    {
        sum += ctoi(n.at(i));
    }
    if (sum%9==0)
    {
        cout << "Yes" << endl;
    } else
    {
        cout << "No" << endl;
    }
    return 0;
}

/* 解説放送

int main() {
    string s;
    cin >> s;
    int x = 0;
    for (char c : s) {
        x += (c-'0'); //'0'の文字を文字コードとしてみるとそれ以降連番になっているので、cと0の文字コードとの差が数値と一緒になる
    }
    if (x==0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
*/