#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int a, b;
    char op;
    cin >> a >> op >> b;
    if (op == '+') cout << a + b << endl;
    else if (op == '-') cout << a - b << endl;

    return 0;
}