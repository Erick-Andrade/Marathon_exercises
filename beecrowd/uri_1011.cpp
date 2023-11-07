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
    
    int r; cin >> r;
    double volume = (4/3.0) * 3.14159 * pow(r, 3);
    cout << "VOLUME = " << setprecision(3) << fixed << volume << endl;
    return 0;
}
