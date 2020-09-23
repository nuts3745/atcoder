#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int N;
    cin >> N;
    int A[N];
    rep(i, N) cin >> A[i];
    int count = 0;
    while (true) {
        bool flag = false;
        rep(i, N) {
            if (A[i] % 2 == 0) {
                A[i] /= 2;
            }
            else {
                flag = true;
                break;
            }
        }
        if (flag) break;
        count += 1;
    }
    cout << count << endl;
    return 0;
}