#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 110;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    
    int n; cin >> n;
    vector<vector<int>> quadrado(n, vector<int>(n));

    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> quadrado[i][j];
    
    int sum = 0, ok = 1, diagonalPrincipal = 0, diagonalSecundaria = 0;
    for (int i = 0; i < n; i++) sum += quadrado[0][i];

    for (int i = 0; i < n and ok; i++) {
        int linha = 0, coluna = 0;
        for (int j = 0; j < n; j++) {
            linha += quadrado[i][j];
            coluna += quadrado[j][i];
            if (i == j) diagonalPrincipal += quadrado[i][j];
            if (j == n-1-i) diagonalSecundaria += quadrado[i][j];
        }

        if (linha != sum) ok = 0;
        if (coluna != sum) ok = 0;
    }

    if (ok) {
        if (diagonalPrincipal != sum) ok = 0;
        if (diagonalSecundaria != sum) ok = 0;
    }

    if (ok) cout << sum << endl;
    else cout << -1 << endl;

    
    return 0;
}
