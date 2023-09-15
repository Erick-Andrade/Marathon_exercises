/*
Problema 5 - Brick Wall Patterns
https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=841
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

int variacoes(int n) {
    /*
    F(n) = F(n-1) + F(n-2)

    F(n-1): a primeira está em pé 
    F(n-2): a está em deitada

    F(1) = 1
    F(2) = 2
    */
    if (n <= 2) return n;
    return variacoes(n-1) + variacoes(n-2);
}

int main() { _

    int n;
    while (cin >> n and n) {
        int ans = variacoes(n);
        cout << ans << endl;
    }
    return 0;
}

