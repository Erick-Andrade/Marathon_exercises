/*
Tacos de Bilhar
https://neps.academy/br/course/estruturas-de-dados-basicas/lesson/tacos-de-bilhar
*/

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
    set<int> tacos;
    while (n--) {
        int c; cin >> c;
        if (tacos.find(c) == tacos.end()) {
            ans += 2;
            tacos.insert(c);
        } else tacos.erase(c);
    }

    cout << ans << endl;
    return 0;
}
