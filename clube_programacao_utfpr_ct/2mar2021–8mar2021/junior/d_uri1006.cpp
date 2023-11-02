// https://www.urionlinejudge.com.br/judge/en/problems/view/1006

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
    double a, b, c, average;
    cin >> a >> b >> c;
    average = (a * 2 + b * 3 + c * 5) / 10;
    cout << "MEDIA = " << setprecision(1) << fixed << average << endl;
    return 0;
}