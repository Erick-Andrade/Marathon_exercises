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
    
    double a, b, average; cin >> a >> b;
    average = (a * 3.5 + b * 7.5) / 11;
    cout << "MEDIA = " << setprecision(5) << fixed << average << endl;
    return 0;
}
