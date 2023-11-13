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
    int n; cin >> n;
    vector<int> nums, um;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x) um.pb(i-1)
        nums.pb(x);
    }

    int ans = 0, size = um.size();
    for (int i = 0; i < n; i++) {
        if (nums[i]) {

        } else {
            vector<int>::iterator lower = lower_bound(um.begin(), um.end(), i);
            int pos = (lower - um.begin());
            for (int j = pos; j < size; j+=2) {
                
            }
        }
    }

}