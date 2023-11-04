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
    
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    int a1 = x1 * y1, a2 = x2 * y2;
    int ans = (a1 >= a2) ? a1: a2;
    cout << ans << endl;
    return 0;
}
