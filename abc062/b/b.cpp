#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> vec(h);
    rep(i, h)
    {
        cin >> vec.at(i);
    }
    rep(i, w + 2) cout << '#';
    cout << endl;
    rep(i, h)
    {
        cout << '#' << vec.at(i) << '#' << endl;
    }
    rep(i, w + 2) cout << '#';
    cout << endl;
    return 0;
}