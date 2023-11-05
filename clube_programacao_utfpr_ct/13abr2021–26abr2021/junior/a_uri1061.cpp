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

    int dia1[4], dia2[4];
    scanf("Dia %d\n%d : %d : %d\nDia %d\n%d : %d : %d", &dia1[0], &dia1[1], &dia1[2], &dia1[3], &dia2[0], &dia2[1], &dia2[2], &dia2[3]);
    int ans[4];

    for (int i = 3; i > 0; i--) {
        if (dia2[i] < dia1[i]) {
            dia2[i-1]--;
            dia2[i] += (i == 1) ? 24: 60;
        } 
        ans[i] = dia2[i] - dia1[i];
    }

    ans[0] = dia2[0] - dia1[0];

    cout << ans[0] << " dia(s)" << endl;
    cout << ans[1] << " hora(s)" << endl;
    cout << ans[2] << " minuto(s)" << endl;
    cout << ans[3] << " segundo(s)" << endl;
    return 0;
}