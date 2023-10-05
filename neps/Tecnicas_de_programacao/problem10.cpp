/*
Arquivos
https://neps.academy/br/course/tecnicas-de-programacao/lesson/arquivos
*/

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 2*1e5+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    
    int n, b; cin >> n >> b;
    vector<int> arquivos(n);
    for (int i = 0; i < n; i++) cin >> arquivos[i];
    sort(arquivos.begin(), arquivos.end());    

    int i = 0, j = n - 1, ans = 0;
    while (i <= j) {
        int sum = arquivos[i] + arquivos[j];
        if (sum <= b) i++;
        j--;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
