#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int N;
    cin >> N;
    int n = N;
    int sum = 0;
    rep(i, 8) {
        sum += n%10;
        n /= 10;
    }
    if ( N % sum == 0) {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}