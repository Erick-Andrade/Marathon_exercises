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
 
    int n, maximum = 0, minimum = INF, iMaximum, iMinimum; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x > maximum) {
            maximum = x;
            iMaximum = i;
        }

        if (x <= minimum) {
            minimum = x;
            iMinimum = i;
        }
    }

    int ans =  (n - 1 - iMinimum) + iMaximum;
    if (iMinimum < iMaximum) ans--; 

    cout << ans << endl;

    return 0;
}