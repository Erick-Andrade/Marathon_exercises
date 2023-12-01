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
    
    int n;
    while (cin >> n and n) {
        vector<int> posF(n);
        int qtd = 0;
        for (int i = 0; i < n; i++) {
            int c, p, pos; cin >> c >> p;
            pos = p + i;
            if (pos >= 0 and pos < n and posF[pos] == 0) {
                qtd++;
                posF[pos] = c;
            }
        }

        if (qtd == n) for (int i = 0; i < n; i++) cout << posF[i] << " ";
        else cout << -1;
        cout << endl;
    }
    return 0;
}