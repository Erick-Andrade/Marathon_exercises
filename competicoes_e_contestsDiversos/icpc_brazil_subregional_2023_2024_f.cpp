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
    int d, c, r, ans = 0; cin >> d >> c >> r;
    vector<int> tiring(c), invigorating(r);
    for (int i = 0; i < c; i++) cin >> tiring[i];
    for (int i = 0; i < r; i++) cin >> invigorating[i];
    int i = 0, j = 0;
    while (i < c) {
        while (i < c and d >= tiring[i]) {
            d -= tiring[i];
            ans++;
            i++;
        }

        while (i < c and j < r and d < tiring[i]) {
            d += invigorating[j];
            j++;
            ans++;
        }

        if (i >= c and j < r) while (j < r) {
            j++;
            ans++;
        }
        
        if (i < c and j >= r and d < tiring[i]) break;
    }
    
    cout << ans << endl;
}