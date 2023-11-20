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
        string ans = "YES";
        int sisters[3], greater = 0, coins;
        for (int i = 0; i < 3; i++) {
            cin >> sisters[i];
            greater = max(greater, sisters[i]);
        }
        cin >> coins;
        for (int i = 0; i < 3; i++) coins -= (greater - sisters[i]);
        if (coins < 0 or coins % 3 != 0) ans = "NO";
        cout << ans << endl;
    }

    return 0;
}