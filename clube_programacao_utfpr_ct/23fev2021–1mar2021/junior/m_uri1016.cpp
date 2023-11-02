// https://www.beecrowd.com.br/judge/en/problems/view/1016?origem=1

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

    /*
    30 - 60 min
    distance - ans

    ans = 60 distance / 30
    ans = 2 distance    
    */
    int distance, ans; cin >> distance;
    ans = 2 * distance;
    cout << ans << " minutos" << endl;
    return 0;
}