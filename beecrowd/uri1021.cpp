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
 
    double n; cin >> n;
    int cents = n * 100, notes[] = {10000, 5000, 2000, 1000, 500, 200}, coins[] = {100, 50, 25, 10, 5, 1};
    cout << "NOTAS:" << endl;
    for (int note: notes) {
        int qtd = cents / note;
        cents %= note;
        double new_note = note / 100.00;
        cout << qtd << " nota(s) de R$ " << setprecision(2) << fixed << new_note << endl;
    }

    cout << "MOEDAS:" << endl;
    for (int coin: coins) {
        int qtd = cents / coin;
        cents %= coin;
        double new_coin = coin / 100.00;
        cout << qtd << " moeda(s) de R$ " << setprecision(2) << fixed << new_coin << endl;
    }
    return 0;
}