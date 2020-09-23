#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, M;
    cin >> N >> M;
    int ans = 0;
    ans += N*(N-1)/2;
    ans += M*(M-1)/2;
    cout << ans << endl;
    return 0;
}