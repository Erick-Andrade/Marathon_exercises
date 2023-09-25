// https://cses.fi/problemset/task/1667

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e5+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

vector<vector<int>> computers(MAX);
vector<int> pai(MAX, -1);
int n, m, visitado[MAX];


void bfs(int source) {
    pai[source] = source;
    queue<int> q;
    q.push(source);
    visitado[source] = 1;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        for (auto v: computers[current]) {
            if (!visitado[v]) {
                q.push(v);
                visitado[v] = 1;
                pai[v] = current;
            }
        }
    }
}

vector<int> path(int v) {
    vector<int> ans;
    if (!visitado[v]) return ans;

    ans.push_back(v);
    while (pai[v] != v) {
        v = pai[v];
        ans.pb(v);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() { _
    
    memset(visitado, 0, sizeof(visitado));
    
    cin >> n >> m;
    while (m--) {
        int a, b; cin >> a >> b;
        computers[a].pb(b);
        computers[b].pb(a);
    }

    bfs(1);
    vector<int> ans = path(n);
    int size = ans.size();
    if (size) {
        cout << size << endl;
        for (auto v: ans) cout << v << " ";
        cout << endl;
    } else cout << "IMPOSSIBLE" << endl;

    return 0;
}
