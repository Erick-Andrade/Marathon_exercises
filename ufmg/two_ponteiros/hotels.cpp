// https://www.spoj.com/problems/HOTELS/

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
    vector<int> hotels(n);
    for (int i = 0; i < n; i++) cin >> hotels[i];

    int i = 0, j = 0, ans = 0, sum = hotels[0];

    while (j < n) {
        if (sum <= m) ans = max(ans, sum);
        if (sum <= m) {
            j++;
            sum += hotels[j];
        } else {
            sum -= hotels[i];
            i++;
        }
    }

    cout << ans << endl;

    return 0;
}
