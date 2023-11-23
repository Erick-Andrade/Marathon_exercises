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
 
    double a, b, c, ans; cin >> a >> b >> c;

    if (a + b > c and a + c > b and b + c > a) {
        ans = a + b + c;
        cout << "Perimetro = " << setprecision(1) << fixed << ans << endl;
    }
    else {
        ans = ((a + b) * c) / 2;
        cout << "Area = " << setprecision(1) << fixed << ans << endl;
    }

    return 0;
}