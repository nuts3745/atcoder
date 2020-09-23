#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    rep(i,n) cin >> l.at(i);
    ll count = 0;
    for (int i = 1; i < n; i++)
    {
        if (l.at(i-1) > l.at(i))
        {
            count += l.at(i-1) - l.at(i);
            l.at(i) = l.at(i-1);
        }
    }
    cout << count << endl;
    return 0;
}

int atcoderlive() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int h = 0;
    ll ans = 0;
    rep(i,n) {
        h = max(h,a[i]);
        ans += h-a[i];
    }
    cout << ans << endl;
}