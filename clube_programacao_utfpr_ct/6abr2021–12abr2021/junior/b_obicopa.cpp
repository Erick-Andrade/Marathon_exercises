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
    
    int k, l; cin >> k >> l;
    string ans;
    if (k > l) swap(k, l);

	if (l-k == 1 and l % 2 == 0) ans = "oitavas";
    else if (l-k <= 3 and l <= 4 and k <= 4) ans = "quartas";
    else if (l-k <= 3 and l > 4 and l <= 8 and k > 4 and k <= 8) ans = "quartas";
    else if (l-k <= 3 and l > 8 and l <= 12 and k > 8 and k <= 12) ans = "quartas";
    else if (l-k <= 3 and l > 12 and k > 12) ans = "quartas";
    else if (l-k <= 7 and l <= 8 and k <= 8) ans = "semifinal";
    else if (l-k <= 7 and l >= 9  and k >= 9) ans = "semifinal";
    else ans = "final"; 
    cout << ans;
    
    return 0;
}
