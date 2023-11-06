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
    
    int a, b, c, ans; cin >> a >> b >> c;

    if (a < b and b < c) ans = 1;
    else if (a + b < c) ans = 1;
    else if (a < b) ans = 2;
    else if (a == b and b != c) ans = 2;
    else ans = 3;
	cout << ans << endl;
    return 0;
}