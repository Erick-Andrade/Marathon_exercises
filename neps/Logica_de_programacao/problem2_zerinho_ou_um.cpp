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

    if (a == b and b == c) cout << "*" << endl;
    else if (a == b and b != c) cout << "C" << endl;
    else if (a != b and a == c) cout << "B" << endl;
    else cout << "A" << endl;
    return 0;
}