#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, y;
    cin >> n >> y;
    int a=0,b=0,c=0;
    bool flag=false;
    for (int i = 0; i < n+1; i++)
    {
        if (flag) break;
        for (int j = 0; j < n+1; j++)
        {
            if (flag) break;
            for (int k = 0; k < n+1; k++)
            {
                if (i + j + k == n && i*10000 + j*5000 + k*1000 == y)
                {
                    a = i;
                    b = j;
                    c = k;
                    flag = true;
                    break;
                }
                else 
                {
                    flag = false;
                    break;
                }
            }
        }
    }
    if (flag) cout << a << ' ' << b << ' ' << c << endl;
    else cout << "-1 -1 -1" << endl;
    return 0;
}