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
    
    int n, ans = 1, sum = 0; cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        sum += x;
        if (sum < 1000000) ans++;
    }

    cout << ans << endl;
    
    return 0;
}