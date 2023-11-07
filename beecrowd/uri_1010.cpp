#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 110;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    
    int code1, code2, units1, units2;
    double price1, price2, price;
    cin >> code1 >> units1 >> price1 >> code2 >> units2 >> price2;
    price = units1 * price1 + units2 * price2;
    cout << "VALOR A PAGAR: R$ " << setprecision(2) << fixed << price << endl;
    
    return 0;
}
