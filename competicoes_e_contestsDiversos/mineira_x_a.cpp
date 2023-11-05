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
    int igredientes[4] = {0};
    for (int i = 0; i < 4; i++) {
        int x; cin >> x;
        int esq = abs(x - i), dir = abs(x + i);
        if (esq >= 0 and esq < 4) igredientes[esq]++;
        if (dir >= 0 and dir < 4) igredientes[dir]++;
    }

    int maior = 0, index = -1;
    for (int i = 0; i < 4; i++) {
        if (igredientes[i] > maior) {
            index = i + 1;
            maior = igredientes[i];
        }
    }

    cout << index << endl;
}