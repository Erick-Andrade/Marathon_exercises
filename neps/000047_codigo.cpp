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
    
    int n, ans = 0; cin >> n;
    string cmp = "100";
    vector<char> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    for (int i = 0; i < n-2; i++) {
        string num;
        for (int j = i; j < i + 3; j++)  num += nums[j];
        if (num == cmp) ans++;
    }

    cout << ans << endl;
    return 0;
 
}