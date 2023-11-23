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
    int l, c, t1, t2; cin >> l >> c;
    t1 = (l * c) + ((l-1) * (c-1));
    t2 = 2 * ((l-1) + (c-1));

    cout << t1 << endl;
    cout << t2 << endl;
    return 0;
}