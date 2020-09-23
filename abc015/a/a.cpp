#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    string a, b;
    cin >> a >> b;
    if (a.size() >= b.size()) {
        cout << a << endl;
    }
    else cout << b << endl;
    return 0;
}