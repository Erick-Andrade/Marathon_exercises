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
 
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (b > c and d > a and c + d > a + b and c > 0 and d > 0 and a % 2 == 0) cout << "Valores aceitos" << endl;
    else cout << "Valores nao aceitos" << endl;
    return 0;
}