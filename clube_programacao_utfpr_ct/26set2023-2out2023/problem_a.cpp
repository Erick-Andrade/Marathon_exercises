// https://atcoder.jp/contests/abc242/tasks/abc242_a

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
 
int main() { 
    int a, b, c, x;
    double ans;
    cin >> a >> b >> c >> x;
    if (x > b) ans = 0;
    else if (x <= a) ans = 1;
    else ans = (double) c / (b - a);
    cout << ans << endl;
    return 0;
}