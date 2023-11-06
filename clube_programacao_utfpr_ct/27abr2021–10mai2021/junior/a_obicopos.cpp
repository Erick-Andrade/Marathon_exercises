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
    
    int n;
    char pos; cin >> n >> pos;
    int ans[3] = {0};
    ans[pos-65] = 1;
    while (n--) {
        int x; cin >> x;
        if (x == 1) swap(ans[0], ans[1]);
        else if (x == 2) swap(ans[1], ans[2]);
        else swap(ans[0], ans[2]);
    }

    for (int i = 0; i < 3; i++) if (ans[i]) {
        char copo = 'A' + i;
        cout << copo << endl;
        break;
    }
    
    return 0;
}