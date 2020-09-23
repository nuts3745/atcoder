#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> b(m);
    rep(i, m) cin >> b[i];
    vector<vector<int>> a(n, vector<int>(m));
    rep(i, n) rep(j, m) cin >> a[i][j];
    int count = 0;
    rep(i, n) {
        int sum = 0;
        rep(j, m) {
            sum += a[i][j] * b[j];
        }
        sum += c;
        if (sum > 0)
        {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}