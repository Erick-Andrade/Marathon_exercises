/*
Problema 1 - The 3n+1 problem
https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36
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

void cycle_length(int k, int* ans) {
    (*ans)++;
    if (k == 1) return;
    else if (k % 2 == 0) cycle_length(k/2, ans);
    else cycle_length(3*k + 1, ans);

}

int main() { _
    int i, j;
    while (cin >> i >> j) {
        int ans = 1;
        cout << i << " " << j << " "; 
        if (i > j) swap(i, j);
        for (int k = i; k <= j; k++) {
            int qtd = 0;
            cycle_length(k, &qtd);
            ans = max(qtd, ans);
        }
        cout << ans << endl;
    }
    return 0;
 
}