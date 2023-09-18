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
    int r, t = 1;
    while (cin >> r and r) {
        int aldo = 0, beto = 0, a, b;
        while (r--) {
            cin >> a >> b;
            aldo += a;
            beto += b;
        }

        cout << "Teste " << t << endl; 
        if (aldo > beto) cout << "Aldo" << endl << endl;
        else cout << "Beto" << endl << endl;
        t++;
    }
    return 0;
}