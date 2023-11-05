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
    
    int x, y;
    while (cin >> x >> y and x and y) {
        if (x > 0 and y > 0) cout << "primeiro" << endl;
        else if (x < 0 and y > 0) cout << "segundo" << endl;
        else if (x < 0 and y < 0) cout << "terceiro" << endl;
        else cout << "quarto" << endl;
    }
    return 0;
}