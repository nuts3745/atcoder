#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int smallest = min(min(A,B),C);
  int largest = max(max(A,B),C);
  cout << largest - smallest << endl;
}
