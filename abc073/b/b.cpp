#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int N,l,r;
    cin >> N ;
    int count = 0;
    rep(i, N) {
        cin >> l >> r;
        count += r - l + 1;
    }
    cout << count << endl;
    return 0;
}