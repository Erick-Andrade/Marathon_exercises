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

int main() { _

    int n;
    int posicoes[MAX];
    while (cin >> n and n) {
        vector<pair<int, int>> carros(n);
        memset(posicoes, 0, sizeof(posicoes));
        for (int i = 0; i < n; i++) {
            int c, p; cin >> c >> p;
            carros[i].f = i + p;
            carros[i].s = c;
        }

        sort(carros.begin(), carros.end());
        int ok = 1;
        for (int i = 0; i < n; i++) {
            int pos = carros[i].f;
            if (pos < 0 or pos >= n) {
                ok = 0;
                break;
            } else posicoes[pos] = 1;
        }

        for (int i = 0; i < n; i++) if (posicoes[i] == 0) {
            ok = 0;
            break;
        }

        if (ok) {
            for (int i = 0; i < n; i++) cout << carros[i].s << " ";
            cout << endl;
        } else cout << -1 << endl;

    }
    return 0;
}