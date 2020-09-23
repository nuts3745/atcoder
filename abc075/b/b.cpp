#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> vec(h, vector<char>(w));
    char sharp = '#';
    char conma = '.';
    rep(i, h){
        rep(j, w) {
        cin >> vec.at(i).at(j);
        if (vec.at(i).at(j) == conma) vec.at(i).at(j) = (int)0;
        }
    }
    rep(i, h) {
        rep(j, w) {
        if (vec.at(i).at(j) == sharp) {
                if (vec.at(i-1).at(j) != sharp) vec.at(i-1).at(j) += 1;
                if (vec.at(i+1).at(j) != sharp) vec.at(i+1).at(j) += 1;
                if (vec.at(i).at(j-1) != sharp) vec.at(i).at(j-1) += 1;
                if (vec.at(i).at(j+1) != sharp) vec.at(i).at(j+1) += 1;
                if (vec.at(i-1).at(j-1) != sharp) vec.at(i-1).at(j-1) += 1;
                if (vec.at(i-1).at(j+1) != sharp) vec.at(i-1).at(j+1) += 1;
                if (vec.at(i+1).at(j-1) != sharp) vec.at(i+1).at(j-1) += 1;
                if (vec.at(i+1).at(j+1) != sharp) vec.at(i+1).at(j+1) += 1;
            }
        }
    }
    rep(i, h){
        rep(j, w){
             cout << vec.at(i).at(j) << endl;
        }
    }
    return 0;
}