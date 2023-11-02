// https://www.beecrowd.com.br/judge/en/problems/view/1018?origem=1

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
    int banknotes[] = {100, 50, 20, 10, 5, 2, 1};
    cout << n << endl;
    for (int banknote: banknotes) {
        int qtd = n / banknote;
        n %= banknote;
        cout << qtd << " nota(s) de R$ " << banknote << ",00" << endl;
    }
    return 0;
}