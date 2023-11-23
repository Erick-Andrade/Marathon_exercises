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
    int nums[10], x, ans = 0;
    for (int i = 0; i < 10; i++) cin >> nums[i];
    cin >> x;
    for (int i = 0; i < 10; i++) if (x == nums[i]) {
        ans = 1;
        break;
    }

    if (ans) cout << "SIM" << endl;
    else cout << "NAO" << endl;

    return 0;
}