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
 
int main() { 

    int ans[4] = {0};
    for (int i = 0; i < 5; i++) {
        int x; cin >> x;
        if (x % 2 == 0) ans[0]++;
        else ans[1]++;

        if (x > 0) ans[2]++;
        else if (x < 0) ans[3]++;
    }

    string type[4] = {"par", "impar", "positivo", "negativo"};
    for (int i = 0; i < 2; i++) cout << ans[i] << " valor(es) " << type[i] << "(es)" << endl;
    for (int i = 2; i < 4; i++) cout << ans[i] << " valor(es) " << type[i] << "(s)" << endl;
    return 0;
}