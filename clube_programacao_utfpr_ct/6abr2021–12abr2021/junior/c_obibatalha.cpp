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
    
    int a1, d1, a2, d2, ans; cin >> a1 >> d1 >> a2 >> d2;
    if ((a1 == d2 and a2 == d1) or (a1 != d2 and a2 != d1)) ans = -1;
    else if (a1 != d2) ans = 1;
    else ans = 2;

    cout << ans << endl;
    
    return 0;
}
