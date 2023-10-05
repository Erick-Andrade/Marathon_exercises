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

int n, m, mapa[MAX][MAX], visitado[MAX][MAX], ans = 0, qtd;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

bool ok(int i, int j) {
    if (visitado[i][j]) return false;
    if (mapa[i][j] == 0) {
        qtd++;
        return false;
    }
    return true;
}

void bfs(int i, int j) {
    queue<pair<int, int>> q;
    q.push(make_pair(i, j));

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();
        int x = current.first, y = current.second;
        visitado[x][y] = 1;
        qtd = 0;
        for (int k = 0; k < 4; k++) {
            int vizinhoX = x + dx[k];
            int vizinhoY = y + dy[k];
            if (ok(vizinhoX, vizinhoY)) {
                visitado[vizinhoX][vizinhoY] = 1;
                q.push(make_pair(vizinhoX, vizinhoY));
            }
        }

        if (qtd > 0) ans++;
        
    }
}

int main() { _
    memset(mapa, 0, sizeof(mapa));
    memset(visitado, 0, sizeof(visitado));
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char x; cin >> x;
            if (x == '#') mapa[i][j] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mapa[i][j] and !visitado[i][j]) bfs(i, j);
        }
    }

    cout << ans << endl;
}