#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    int ans = 1;
    if (n == 1) cout << ans << endl;
    else {
    for (int i = 7; i > 0; i--)
    {
        ans = pow(2, i);
        if (ans <= n) {
            cout << ans << endl;
            break;
        }
    }
}
}
/*
int main() {
    int n;
    cin >> n;
    if (n<2) cout << 1 << endl;
    else if (2<=n && n<4) cout << 2 << endl;
    else if (4<=n && n<8) cout << 4 << endl;
    else if (8<=n && n<16) cout << 8 << endl;
    else if (16<=n && n<32) cout << 16 << endl;
    else if (32<=n && n<64) cout << 32 << endl;
    else if (64<=n && n<128) cout << 64 << endl;
    
    return 0;
}
*/