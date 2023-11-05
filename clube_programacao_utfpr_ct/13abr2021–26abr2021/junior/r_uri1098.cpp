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
    
    double k = 0;
    for (double i = 0; i <= 2; i += 0.2) {
        for (int j = 1; j <= 3; j++) {
            int qtd_casa = 1;
            if (i == 0 or (i > 0.9 and i < 1.1) or i > 1.9) qtd_casa = 0;
            
            cout << "I=" << setprecision(qtd_casa) << fixed << i << " J=" << setprecision(qtd_casa) << fixed << j + k << endl;
        }
        k += 0.2;
    }
    return 0;
}