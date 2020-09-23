#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, A, B;
    string s;
    cin >> n >> A >> B >> s;
    int count = 0;
    int bc = 1;
    for (int i = 0; i < n; i++)
    {
        if (s.at(i) == 'a')
        {
            if (A+B > count)
            { 
                cout << "Yes" << endl;
                count++;
            }
            else cout << "No" << endl;
        }
        else if (s.at(i) == 'b')
        {
            if (A+B > count && B >= bc)
            {
                cout << "Yes" << endl;
                count++;
                bc++;
            }
            else cout << "No" << endl;
        }
        else if (s.at(i) == 'c')
        {
            cout << "No" << endl;
        }
    }
    
    return 0;
}