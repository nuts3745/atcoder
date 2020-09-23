#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int count = 0;
    for (int i = 0; i < a+1; i++)
    {
        for (int j = 0; j < b+1; j++)
        {
            for (int k = 0; k < c+1; k++)
            {
                if (500 * i + 100 * j + 50 * k == x) 
                {
                    count += 1;
                }
            }
            
        }
        
    }
    cout << count << endl;
    
    return 0;
}