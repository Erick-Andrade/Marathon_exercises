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
    int t = 1, n;
    while (cin >> n and n) {
        string name1, name2; cin >> name1 >> name2;
        cout << "Teste " << t << endl;
        while (n--) {
            int a, b; cin >> a >> b;
            int sum = a + b;
            if (sum % 2 == 0) cout << name1 << endl;
            else cout << name2 << endl;
        }
        cout << endl;
        t++;
    }

    return 0;
}