/*
Problema 6 - Investindo no Mercado de Ações 1
https://br.spoj.com/problems/ACOES1MG/
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

void acoes(int n, int k, int* ans) {
    if (n <= k) {
        (*ans)++;
        return;
    } else {
        int a = n / 2, b = n / 2;
        if (n % 2 == 1) a++;
        acoes(a, k, ans);
        acoes(b, k, ans);
    }
}

int main() { _

    int n, k; 
    while (cin >> n >> k and n and k) {
        int ans = 0;
        acoes(n, k, &ans);
        cout << ans << endl;
    }

    return 0;
}