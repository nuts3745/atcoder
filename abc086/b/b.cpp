#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    string a, b;
    cin >> a >> b;
    int x = stoi(a + b);
    int c = sqrt(x);
    if (c*c == x) cout << "Yes" << endl;
    else
    {
        cout << "No" << endl;
    }
    

    return 0;
}