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
    
    double x, average = 0, qtd = 2;
    while (qtd--) {
        while (cin >> x and (x < 0 or x > 10)) cout << "nota invalida" << endl;
        average += x;
    }

    average /= 2;
    cout << "media = " << setprecision(1) << fixed << average << endl;
    return 0;
}