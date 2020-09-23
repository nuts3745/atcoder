#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, d;
    double x, y;
    cin >> n >> d;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        double dist = sqrt(((x*x) + (y*y)));
        if (dist <= d)
        {
            count++;
        }
        
    }
    cout << count << endl;   
    return 0;
}