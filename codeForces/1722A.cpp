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
        int n, ans = 1;
        string inp;
        cin >> n >> inp;
        if (n != 5) ans = 0;
        else {
            string cmp = "Timur";
            int ok[5] = {0};
            for (char c: inp) {
                int i = -1;
                if (c == 'T') i = 0;
                else if (c == 'i') i = 1;
                else if (c == 'm') i = 2;
                else if (c == 'u') i = 3;
                else if (c == 'r') i = 4;
                
                if (i != -1) ok[i]++;
            }

            for (int i = 0; i < 5; i++) if (ok[i] != 1) {
                ans = 0;
                break;
            }
        }

        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
 
}