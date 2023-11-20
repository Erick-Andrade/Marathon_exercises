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
    
    int n, anterior = -1; cin >> n;
    vector<int> tabuleiro(n), ans(n);
    for (int i = 0; i < n; i++) cin >> tabuleiro[i];

    for (int i = 0; i < n; i++) {
        if (i-1 >= 0) if (tabuleiro[i-1]) ans[i]++;
        if (i+1 < n) if (tabuleiro[i+1]) ans[i]++;
        if (tabuleiro[i]) ans[i]++;
    }

    for (int i = 0; i < n; i++) cout << ans[i] << endl;
    return 0;
}