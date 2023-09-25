// https://olimpiada.ic.unicamp.br/pratique/p2/2017/f2/mapa/

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e2+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;


int l, c, xans, yans;
int mapa[MAX][MAX];
int visitado[MAX][MAX];
int dx[] = {-1, 0, 1, 0}; // norte, leste, sul, oeste
int dy[] = {0, 1, 0, -1}; // norte, leste, sul, oeste

bool ok(int i, int j) {
    if (visitado[i][j]) return false;
    else if (mapa[i][j] == 0) return false;
    visitado[i][j] = 1;
    return true;
}
void bfs(int i, int j) {
    queue<pair<int, int>> q;
    q.push(make_pair(i, j));
    visitado[i][j] = 1;

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();
        int x = current.first, y = current.second;
        for (int k = 0; k < 4; k++) {
            int xvizinho = x + dx[k];
            int yvizinho = y + dy[k];
            if (ok(xvizinho, yvizinho)) {
                q.push(make_pair(xvizinho, yvizinho));
                xans = xvizinho;
                yans = yvizinho;
            }
        }
    }
}

int main() { _
    
    memset(mapa, 0, sizeof(mapa));
    memset(visitado, 0, sizeof(visitado));
    cin >> l >> c;
    for (int i = 1; i <= l; i++) {
        for (int j = 1; j <= c; j++) {
            char c; cin >> c;
            if (c == 'o') {
                xans = i;
                yans = j;
            } else if (c == 'H') mapa[i][j] = 1;
        }
    }

    bfs(xans, yans);
    cout << xans << " " << yans << endl;

    return 0;
}
