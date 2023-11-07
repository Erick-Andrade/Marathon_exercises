#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 110;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _

    char alg;
    while (cin >> alg and alg != '0') {
        string num, ans; 
        cin >> num;
        for (char c: num) if (c != alg) ans += c;

        int size = ans.size();
        if (size == 0) ans = '0';
        else {
            int i = 0;
            while (i != size-1 and ans[i] == '0') i++;
            ans.erase(0, i);
        }

        cout << ans << endl;

    }
    return 0;
}