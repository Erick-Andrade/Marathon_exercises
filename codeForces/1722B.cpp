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
        int n; cin >> n;
        string a, b;
        cin >> a >> b;
        int size = a.size();
        for (int i = 0; i < size; i++) {
            if (a[i] != 'R') a[i] = 'X';
            if (b[i] != 'R') b[i] = 'X';
        }

        if (a != b) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}