#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int A, B;
    cin >> A >> B;
    int n = B - A;
    int count = 0;
    rep(i, n+1) {
        int a1 = A / 10000;
        int a2 = A % 10000 / 1000;
        int a4 = A % 10000 % 1000 % 100 / 10;
        int a5 = A % 10000 % 1000 % 100 % 10;
        if (a1 == a5 and a2 == a4) count += 1;
        A += 1;
    }
    cout << count << endl;
    return 0;
}