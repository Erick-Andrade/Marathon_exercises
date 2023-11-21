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
 
    double a, b, c, delta; cin >> a >> b >> c;
    delta = pow(b, 2) - (4 * a * c);
    if (delta < 0 or a == 0) cout << "Impossivel calcular" << endl;
    else {
        double r1 = (-b + sqrt(delta)) / (2 * a),
            r2 = (-b - sqrt(delta)) / (2 * a);
        cout << "R1 = " << setprecision(5) << fixed << r1 << endl;
        cout << "R2 = " << setprecision(5) << fixed << r2 << endl;
    
    }
    return 0;
}