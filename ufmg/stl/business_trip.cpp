// https://codeforces.com/contest/149/problem/A

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e5+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    
    int k; cin >> k;
    priority_queue<int, vector<int>, less<int>> flowers;
    for (int i = 0; i < 12; i++) {
        int x; cin >> x;
        flowers.push(x);
    }

    int ans = 0;
    while (!flowers.empty() and k > 0) {
        k -= flowers.top();
        flowers.pop();
        ans++;
    }

    if (k <= 0) cout << ans << endl;
    else cout << -1 << endl;

    
    return 0;
}
