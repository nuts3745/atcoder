#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<ll> li;
    li.push_back(2LL);
    li.push_back(1LL);
    rep(i, n) li.push_back(li[i] + li[i + 1]);
    cout << li[n] << endl;

    return 0;
}