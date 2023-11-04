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
    
    int j, p, v, e, d; cin >> j >> p >> v >> e >> d;

    if (j == -1 and (v != -1 and e != -1 and d != -1)) j = v + e + d;
    else if (j == -1 and (v != -1 and e == -1 and d != -1)) {
        e = p - 3*v;
        j = v + e + d;
    } else if (j == -1 and (v == -1 and e != -1 and d != -1)) {
        v = (p - e) / 3;
        j = v + e + d;
    }

    if (p == -1 and (v != -1 and e != -1)) p = 3*v + e;
    else if (p == -1 and (v == -1 and e != -1)) {
        v = j - (e + d);
        p = 3*v + e;
    } else if (p == -1 and (v != -1 and e == -1)) {
        e = j - (d + v);
        p = 3*v + e;
    }

    if (v == -1 and (j != -1 and e != -1 and d != -1)) v = j - (e + d);
    else if (v == -1 and (j != -1 and e == -1 and d != -1)) {
        /*
        J = v + e + d => v + e = J - d

        Sabendo que v equivale a 3 pontos e e a 1, temos:
        3v + e = P

        Assim temos:
            3v + e = P
            v + e = J - d

        2v = P - J + d
        v = (P - j + d) / 2
        */
        v = (p - j + d) / 2;
        e = j - (v + d);
    } else if (v == -1 and (j != -1 and e != -1 and d == -1)) {
        /*
        j = v + d + e => v + d = j - e

        p = 3v + e => v = (p - e) / 3
        */
        v = (p - e) / 3;
        d = j - (v + e);
    }
    if (e == -1 and (j != -1 and v != -1 and d != -1)) e = j - (v + d);
    else if (e == -1 and (j != -1 and v != -1 and d == -1)) {
        e = p - 3*v;
        d = j - (e + v);
    }
    if (d == -1 and (j != -1 and e != -1 and v != -1)) d = j - (v + e);

    cout << j << " " << p << " " << v << " " << e << " " << d << endl;
    
    return 0;
}

