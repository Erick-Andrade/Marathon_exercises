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
    
    int p1, c1, p2, c2; cin >> p1 >> c1 >> p2 >> c2;
    int esquerda = p1 * c1, direita = p2 * c2;
    if (esquerda == direita) cout << 0 << endl;
    else if (esquerda > direita) cout << -1 << endl;
    else cout << 1 << endl;
    return 0;
}
