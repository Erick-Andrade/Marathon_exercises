// https://codeforces.com/problemset/problem/1301/A

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e5+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    
    int t; cin >> t;
    while (t--) {
        string a, b, c; cin >> a >> b >> c;
        int n = a.size(), ans = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i] and a[i] != c[i]) ans = 0;
            else if (a[i] != b[i] and b[i] != c[i] and c[i] != a[i]) ans = 0;
        }

        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
