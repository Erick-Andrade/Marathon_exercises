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
        int n, odd = 0, even = 0; cin >> n;
        // even + even = even
        // odd + odd = even
        // even + odd = odd
        // odd + even = odd
        for (int i = 0; i < 2*n; i++) {
            int a; cin >> a;
            if (a % 2 == 0) even++;
            else odd++;
        }

        if (odd == even) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
 
}