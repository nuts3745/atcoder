#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, n) cin >> vec.at(i);
    bool clear = true;
    int p = 1;
    int count = 0;
    while (p != 2)
    {
        p = vec.at(p-1);
        count++;
        if (count > n*2) { /* 10**5 くらいにしようと思ってたら 10*5って書いててWAした */
            clear = false;
            break;
        }
    }
    if (clear == false) cout << -1 << endl;
    else cout << count << endl;
    return 0;
}