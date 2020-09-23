#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    ll x, k, d;
    cin >> x >> k >> d;
    ll ans = x;
    /*
    if (x > k * d)
    {
        ans = x - k*d;
    }
    else
    {
    ans = x % d;
    if (x == d && k % 2 == 0)
    {
        ans += x;
    }
    }
    */
    for (int i = 0; i < k; i++)
    {
        if (ans > 0)
        {
            ans -= d;
        }
        else
        {
            ans += d;
        }
    }
    
    if (ans < 0)
    {
        ans*= -1;
    }
    cout << ans << endl;
    return 0;
}