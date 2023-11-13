#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 110;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    
    int x, y; cin >> x >> y;
    string ans;
    if (x == 0 or y == 0) ans = "eixos";
    else if (x > 0 and y > 0) ans = "Q1";
    else if (x < 0 and y > 0) ans = "Q2";
    else if (x < 0 and y < 0) ans = "Q3";
    else ans = "Q4";


    cout << ans << endl;
    return 0; 
}
