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

    int n; cin >> n;
    string paridade, sinal;
    while (n--) {
        int x; cin >> x;
        if (x % 2 == 0) paridade = "EVEN";
        else paridade = "ODD";

        if (x > 0) sinal = "POSITIVE";
        else sinal = "NEGATIVE";

        if (x == 0) cout << "NULL" << endl;
        else cout << paridade << " " << sinal << endl;
    }
    return 0;
}