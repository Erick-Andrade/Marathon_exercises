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
    
    int cartas[3];
    for (int i = 0; i < 3; i++) cin >> cartas[i];
    if (cartas[0] == cartas[1]) cout << cartas[2] << endl;
    else if (cartas[0] == cartas[2]) cout << cartas[1] << endl;
    else cout << cartas[0] << endl;
    return 0;
}