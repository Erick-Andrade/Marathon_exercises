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
    
    double sides[3];
    for (int i = 0; i < 3; i++) cin >> sides[i];

    sort(sides, sides+3, greater<double>());
    double a = sides[0], b = sides[1], c = sides[2];
    
    if (a >= b + c) cout << "NAO FORMA TRIANGULO" << endl;
    else {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)) cout << "TRIANGULO RETANGULO" << endl;
        else if (pow(a, 2) > pow(b, 2) + pow(c, 2)) cout << "TRIANGULO OBTUSANGULO" << endl;
        else if (pow(a, 2) < pow(b, 2) + pow(c, 2)) cout << "TRIANGULO ACUTANGULO" << endl;

        if (a == b and b == c) cout << "TRIANGULO EQUILATERO" << endl;
        else if (!(a != b and b != c and a != c)) cout << "TRIANGULO ISOSCELES" << endl; 
    }

    return 0;
}