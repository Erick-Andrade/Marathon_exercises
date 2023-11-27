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
    
    double average = 0;
    int ans = 0;

    for (int i = 0; i < 6; i++) {
        double x; cin >> x;
        if (x > 0) {
            ans++;
            average += x;
        }
    }

    if (ans > 0) average /= ans;
    cout << ans << " valores positivos" << endl;
    cout << setprecision(1) << fixed << average << endl;
    return 0;
}