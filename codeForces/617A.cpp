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

    int x, aux = 0, ans = 0, moves[] = {5, 4, 3, 2, 1};
    cin >> x;
    while (x) {
        ans += x / moves[aux];
        x %= moves[aux];
        aux++;
    }

    cout << ans << endl;

    return 0;
}