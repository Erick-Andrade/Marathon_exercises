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
    int diametro, dimensoes[3]; cin >> diametro;
    for (int i = 0; i < 3; i++) cin >> dimensoes[i];
    int ans = 1;
    for (int i = 0; i < 3; i++) if (dimensoes[i] < diametro) ans = 0;
    if (ans) cout << 'S' << endl;
    else cout << 'N' << endl;
    
    return 0;
}