#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};
int main() {
    int h, w;
    int ch, cw;
    int dh, dw;
    cin >> h >> w >> ch >> cw >> dh >> dw;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    vector<vector<int>> dist(h, vector<int>(w, -1));
    deque<P> q;
    
    return 0;
}

/*
int main() {
    歩いていけるところを探すのはBFSを使おう
    キューというデータ構造を利用する
    行ける座標をすべてキューの末尾に追加して、先頭から取り出して座標に丸をつける感じ
    それプラス、ワープをどう扱うか

    丸をつける代わりに、魔法を使用したコストをマップに追加していくといい
    コストが複雑のときは、ダイクストラ法を使う
    今回はコストが0,1なので、01-BFSを使おう
    01-BFSでは、キューの代わりにデックdequeを使う
    0を優先的に使えるように、0は先頭から入れて、1は末尾から追加する

    全部コスト0→キューでもスタックでもなんでもOK(更新順が問われないから)
    全部コスト1→キューを使う
    コスト0,1だけ→デックを使う

    ダイクストラ法とは何が違うのか
    入れたり出したりする計算量、デックはO(1)で、ダイクストラはO(logN)(プライオリティキューを使っているから)
    慣れてるならデックじゃなくてダイクストラでいい説はある
    int h, w;
    cin >> h >> w;
    int si, sj;
    cin >> si >> sj;
    int ti, tj;
    cin >> ti >> tj;
    --si; --sj; --ti; --tj;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    const int INF = 1e9; //適当に大きい値を入れておく
    vector<vector<int>> dist(h,vector<int>(w,INF));
    deque<P> q; //本当は距離を入れておくといい
    dist[si][sj] = 0;
    q.emplace_back(si,sj);
    while (!q.empty()) {
        int i = q.front().first;
        int j = q.front().second;
        q.pop_front();
        int d = dist[i][j];
        rep(v,4) {
            int ni = i+di[v], nj = j+dj[v];
            if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
            if (s[ni][nj] == '#') continue;
            if (dist[ni][nj] <= d) continue;
            dist[ni][nj] = d;
            q.emplace_front(ni,nj);
        }
        for (int ei = -2; ei <= 2; ++ei)
        {
            for (int ej = -2; ej < 2; ++ej)
            {
                int ni = i+ei, nj = j+ej;
                if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
                if (s[ni][nj] == '#') continue;
                if (dist[ni][nj] <= d+1) continue;
                dist[ni][nj] = d+1;
                q.emplace_back(ni,nj);
            }
            
        }
        
    }
    int ans = dist[ti][tj];
    if (ans == INF) ans= -1;
    cout << ans << endl;
    return 0;
}
*/