/*
Apagando e Ganhando
https://neps.academy/br/course/estruturas-de-dados-basicas/lesson/apagando-e-ganhando
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
    
    int d, n;
    while (cin >> n >> d and n and d) {
        string dig, ans; cin >> dig;
    
        int aux = 0;

        for (char c: dig) {
            while (ans.size() > 0 and c > ans.back() and aux < d) {
                ans.pop_back();
                aux++;
            }

            if (ans.size() < n-d) ans.push_back(c);
        }

        cout << ans << endl;
    }
    return 0;
}
