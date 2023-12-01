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
    int t; cin >> t;
    while (t--) {
        int w, h, n, ans = 1; cin >> w >> h >> n;
        while (w % 2 == 0) {
            w /= 2;
            ans *= 2;
        }

        while (h % 2 == 0) {
            h /= 2;
            ans *= 2;
        }
        
        if (ans >= n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
