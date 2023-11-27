#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e6+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
    
    int n; cin >> n;
    vector<vector<int>> tabela(n, vector<int>(n));
    vector<int> linhas(n), colunas(n);
    for (int i = 0; i < n; i++) {
        int linha = 0;
        for (int j = 0; j < n; j++) {
            cin >> tabela[i][j];
            linha += tabela[i][j];
        }
        linhas[i] = linha;
    }

    for (int i = 0; i < n; i++) {
        int coluna = 0;
        for (int j = 0; j < n; j++) coluna += tabela[j][i];
        colunas[i] = coluna;
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = linhas[i] + colunas[j] - (2 * tabela[i][j]);
            ans = max(ans, sum);
        }
    }

    cout << ans << endl;
    return 0;
}