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

    int t; cin >> t;
    while (t--) {
        int n, smaller_candie = INF, smaller_orange = INF;
        ll ans = 0;
        cin >> n;
        vector<int> candies(n), oranges(n);
        for (int i = 0; i < n; i++) {
            cin >> candies[i];
            smaller_candie = min(candies[i], smaller_candie);
        }
        for (int i = 0; i < n; i++) {
            cin >> oranges[i];
            smaller_orange = min(oranges[i], smaller_orange);
        }

        int i = n-1, j = n-1;
        while (i >= 0 or j >= 0) {
            while (i >= 0 and candies[i] == smaller_candie) i--;
            while (j >= 0 and oranges[j] == smaller_orange) j--;
            if (i >= 0 and j >= 0 and i == j) {
                int candy = candies[i]-smaller_candie;
                int orange = oranges[j]-smaller_orange;
                int candy_and_orange = min(candy, orange);
                if (candy_and_orange) {
                    ans += candy_and_orange;
                    candies[i] -= candy_and_orange;
                    oranges[j] -= candy_and_orange;
                } else {
                    ans += (candy + orange);
                    candies[i] -= candy;
                    oranges[j] -= orange;
                }
            } else {
                if (i > j and i >= 0) {
                    int candy = candies[i]-smaller_candie;
                    ans += candy;
                    candies[i] -= candy;
                } else if (j > i and j >= 0) {
                    int orange = oranges[j]-smaller_orange;
                    ans += orange;
                    oranges[j] -= orange;
                } else {
                    if (i >= 0) {
                        int candy = candies[i]-smaller_candie;
                        ans += candy;
                        candies[i] -= candy;                        
                    }
                    
                    if (j >= 0) {
                        int orange = oranges[j]-smaller_orange;
                        ans += orange;
                        oranges[j] -= orange;                        
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}