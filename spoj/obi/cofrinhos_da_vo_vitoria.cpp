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
    int n, t = 1;
    while (cin >> n and n) {
        int total1 = 0, total2 = 0;
        cout << "Teste " << t << endl;
        while (n--) {
            int j, z; cin >> j >> z;
            total1 += j;
            total2 += z;
            int dif = total1 - total2;
            cout << dif << endl;
        }
        cout << endl;
        t++;
    }
    return 0;
}