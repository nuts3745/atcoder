#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int N;
    string S;
    cin >> N;
    int count = 0;
    rep(i, N) {
         cin >> S;
         if (S == "Y") {
             cout << "Four" << endl;
             break;
         }
         else
         {
             count += 1;
         }
         if (count == N)
         {
             cout << "Three" << endl;
         }
        }
    return 0;
}