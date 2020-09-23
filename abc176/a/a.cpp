#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, x, t;
    cin >> n >> x >> t;
    int count = 0;
    for (int i = 0; n > 0; i++)
    {
        n -= x;
        count++;
    }
    cout << count*t << endl;
    return 0;
}
/* 解説放送
int main() {
    int n, x, t;
    cin >> n >> x >> t;
    int c = (n+x-1)/x; //切り上げはx-1
    cout << c*t << endl;
    return 0;
}
*/