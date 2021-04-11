#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<P> p(n);
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        p.at(i) = make_pair(b, a);
    }
    sort(p.begin(), p.end());
    rep(i, n)
    {
        int a, b;
        tie(b, a) = p.at(i);
        cout << a << " " << b << endl;
    }

    return 0;
}