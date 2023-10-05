// https://codeforces.com/problemset/problem/1328/A

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e3+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    int t; cin >> t;
    while (t--) {
        int a, b, ans; cin >> a >> b;
        if (a % b == 0) ans = 0;
        else if (a > b) ans = b - a % b;
        else ans = b - a;
        cout << ans << endl;
    }
}