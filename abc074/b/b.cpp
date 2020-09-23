#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, K;
    int x;
    cin >> N >> K;
    int sum = 0;
    rep(i, N) {
        cin >> x;
        int disa = x * 2;
        int disb = (K - x) * 2;
        sum += min(disa, disb);
    }
    cout << sum << endl;
    return 0;
}