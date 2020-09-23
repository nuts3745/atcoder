#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec.at(i);
    }
    int a=0, b=0;
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    for (int i = 1; i < n+1; i++)
    {
        if (i % 2 != 0) a += vec.at(i-1);
        else b += vec.at(i-1);
    }
    
    cout << a-b << endl;
    return 0;
}