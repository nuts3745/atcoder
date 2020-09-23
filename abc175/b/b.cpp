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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (i < j && j < k && i < k)
                {
                    if (vec.at(i) != vec.at(j) && vec.at(j) != vec.at(k) && vec.at(k) != vec.at(i))
                    {
                        if (vec.at(i) + vec.at(j) > vec.at(k) && vec.at(j) + vec.at(k) > vec.at(i) && vec.at(k) + vec.at(i) > vec.at(j))
                        {
                            ++count;
                        }
                    }
                }
                
            }
            
        }
        
    }
    
    cout << count << endl;
    return 0;
}