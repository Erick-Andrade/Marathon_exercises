// https://www.beecrowd.com.br/judge/en/problems/view/1012?origem=1

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
 
    double a, b, c; cin >> a >> b >> c;
    double areas[] = {
        (a * c) / 2,
        3.14159 * c * c,
        ((a + b) * c) / 2,
        b * b,
        a * b
    };
    string shapes[] = {"TRIANGULO", "CIRCULO", "TRAPEZIO", "QUADRADO", "RETANGULO"};

    for (int i = 0; i < 5; i++) cout << shapes[i] << ": " << setprecision(3) << fixed << areas[i] << endl;
    
    return 0;
}