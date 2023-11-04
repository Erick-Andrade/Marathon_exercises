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
    
    int t, total = 0, c = 0, r = 0, s = 0;
    cin >> t;
    while (t--) {
        int qtd;
        char tipo;
        cin >> qtd >> tipo;
        total += qtd;

        if (tipo == 'C') c += qtd;
        else if (tipo == 'R') r += qtd;
        else s += qtd;
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    double pc = ((double) c / total) * 100, 
    pr = ((double) r / total) * 100, 
    ps = ((double) s / total) * 100;
    cout << "Percentual de coelhos: " << setprecision(2) << fixed << pc << " %" << endl;
    cout << "Percentual de ratos: " << setprecision(2) << fixed << pr << " %" << endl;
    cout << "Percentual de sapos: " << setprecision(2) << fixed << ps << " %" << endl;
    return 0;
}