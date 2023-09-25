// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C

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
    
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    ll ans = 0;
    int i = 0, j = 0;

    while (i < n or j < m) {
        if (i < n and j < m and a[i] == b[j]) {
            ll num = a[i], ans1 = 0, ans2 = 0;
            while (i < n and a[i] == num) {
                ans1++;
                i++;
            }

            while (j < m and b[j] == num) {
                ans2++;
                j++;
            }

            ans += (ans1 * ans2);
        } else if (i == n or (j < m and b[j] < a[i])) {
            j++;
        } else {
            i++;
        }

    }


    cout << ans << endl;

    return 0;
}
