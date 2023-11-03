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
    
    int p, d1, d2; cin >> p >> d1 >> d2;
    int sum = d1 + d2, ans;
    if (sum % 2 == 0) (p == 0) ? ans = 0 : ans = 1;
    else (p == 0) ? ans = 1: ans = 0;
    cout << ans << endl;
    return 0;
}