// https://www.beecrowd.com.br/judge/en/problems/view/1011?origem=1

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
 
const double PI = 3.14159;

int main() { _
 
    int radius; cin >> radius;
    double volume = (4/3.0) * PI * pow(radius, 3);
    cout << "VOLUME = " << setprecision(3) << fixed << volume << endl;
    return 0;
}