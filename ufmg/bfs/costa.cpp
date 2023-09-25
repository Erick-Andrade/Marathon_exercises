// https://www.beecrowd.com.br/judge/pt/problems/view/2419?origem=1

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e3+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int n, m, ans = 0;
int mapa[MAX][MAX];
int visitado[MAX][MAX];


bool ok(int x, int y, int* qtd) {
    if (mapa[x][y] == 0) {
        (*qtd)++;
        return false;
    } else if (visitado[x][y]) return false;
    visitado[x][y] = 1;
    return true;
}

void bfs(int i, int j) {
    queue<pair<int, int>> q;
    visitado[i][j] = 1;
    q.push(make_pair(i, j));
    while (!q.empty()) {
        pair<int,int> current = q.front();
        q.pop();
        int x = current.first, y = current.second;
        int qtd = 0;
        if (ok(x, y+1, &qtd)) q.push(make_pair(x, y+1));
        if (ok(x, y-1, &qtd)) q.push(make_pair(x, y-1));
        if (ok(x+1, y, &qtd)) q.push(make_pair(x+1, y));
        if (ok(x-1, y, &qtd)) q.push(make_pair(x-1, y));

        if (qtd > 0) ans++;
    }
}

int main() { _
    
    memset(visitado, 0, sizeof(visitado));
    memset(mapa, 0, sizeof(mapa));
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char x; cin >> x;
            if (x == '#') mapa[i][j] = 1;
        }
    }

    for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) if (mapa[i][j] and !visitado[i][j]) bfs(i, j);
    cout << ans << endl;


    return 0;
}
