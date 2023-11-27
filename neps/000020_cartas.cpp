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
    
    int a, b, c; cin >> a >> b >> c;
    if (b != a and b == c) cout << a << endl;
    else if (b != a and a == c) cout << b << endl;
    else cout << c << endl;

    return 0;
}