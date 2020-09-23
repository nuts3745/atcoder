#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    double x = 0;
    x = ceil(n / 1.08);
    if (floor(x * 1.08) == n) cout << x << endl;
    else cout << ":(" << endl;

    return 0;
}