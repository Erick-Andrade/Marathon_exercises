// https://www.beecrowd.com.br/judge/pt/problems/view/1936?origem=1

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e5+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    
    int n, ans = 0; cin >> n;
    int fat[9]; fat[0] = 1;
    for (int i = 1; i < 9; i++) fat[i] = fat[i-1] * i;

    for (int i = 8; i >= 0; i--) {
        int qtd = n / fat[i];
        n %= fat[i];
        ans += qtd;
    }

    cout << ans << endl;

    return 0;
}
