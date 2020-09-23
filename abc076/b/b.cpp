#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, K;
    cin >> N >> K;
    int num = 1;
    rep(i, N) {
        int num1 = num * 2;
        int num2 = num + K;
        num = min(num1, num2);
    }
    cout << num << endl;
    return 0;
}