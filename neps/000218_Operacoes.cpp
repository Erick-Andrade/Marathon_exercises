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
    
    char op; 
    double a, b, result; cin >> op >> a >> b;
    if (op == 'M') result = a * b;
    else result = a / b;

    cout << setprecision(2) << fixed << result << endl;
    return 0;
}