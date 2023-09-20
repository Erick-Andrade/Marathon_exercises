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
    
    int total = 225, porcoes[] = {300, 1500, 600, 1000, 150};
    for (int i = 0; i < 5; i++) {
        int qtd; cin >> qtd;
        total += porcoes[i] * qtd;
    }

    cout << total << endl;
    return 0;
}