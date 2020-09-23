#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  int sum = 0;
  rep(i, N) {
    cin >> vec[i];
    sum += vec[i];
  }
  rep(i, N) {
    cout << max(sum / N, vec[i]) - min(sum / N, vec[i]) << endl;
  }
}
