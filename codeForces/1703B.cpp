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
        int n, ans = 0, balloons[26] = {0};
        string inp;
        cin >> n >> inp;
        for (char c : inp) balloons[c-65]++;
        
        for (int i = 0; i < 26; i++) {
            if (balloons[i]) ans += balloons[i]+1;
        }
        cout << ans << endl;
    }
    return 0;
 
}