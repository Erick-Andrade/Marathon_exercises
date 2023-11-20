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
 
    double num; cin >> num;
    if (num < 0 or num > 100) cout << "Fora de intervalo" << endl;
    else if (num <= 25) cout << "Intervalo [0,25]" << endl;
    else if (num <= 50) cout << "Intervalo (25,50]" << endl;
    else if (num <= 75) cout << "Intervalo (50,75]" << endl;
    else cout << "Intervalo (75,100]" << endl;
    return 0;
}
