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
    while (n--) {
        int x, y; cin >> x >> y;
        if (y == 0) cout << "divisao impossivel" << endl;
        else {
            double ans = (double) x / y;
            cout << setprecision(1) << fixed << ans << endl;
        }
    }
    return 0;
}