#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int digit_sum(int n) {
    if(n < 10) return n;
    return digit_sum(n/10) + n%10;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n+1; i++)
    {
        sum = digit_sum(i);
        if (b >= sum && sum >= a)
        {
            ans += i;
        }
    }
    cout << ans << endl;
    
    return 0;
}