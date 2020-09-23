#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m, a;
    cin >> n >> m;
    vector<int> vec(n);
    rep(i, m * 2) {
        cin >> a;
        vec.at(a-1)++;
    }
    rep(i, n) {
        cout << vec.at(i) << endl;
    }
}