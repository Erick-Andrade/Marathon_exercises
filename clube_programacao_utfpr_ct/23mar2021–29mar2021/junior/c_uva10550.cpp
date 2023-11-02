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
    int init, a, b, c;
    while (cin >> init >> a >> b >> c) {
        if (init == 0 and a == 0 and b == 0 and c == 0) break;

        // 1 step and 3 step
        int ans = 1080;

        // 2 step
        ans += init < a ? (40 + init - a) * 9: (init - a) * 9;        

        // 4 step
        ans += a < b ? (b - a) * 9 : (b - a + 40) * 9;
        
        // 5 step
        ans += b < c ? (40 + b - c) * 9: (b - c) * 9;

        cout << ans << endl;
    }
    return 0;
}