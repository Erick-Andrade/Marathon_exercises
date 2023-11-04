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

    int a, d;
    while (cin >> a >> d and a and d) {
        char impedido = 'N';
        vector<int> atacantes(a), defensores(d);
        for (int i = 0; i < a; i++) cin >> atacantes[i];
        for (int i = 0; i < d; i++) cin >> defensores[i];
        
        sort(defensores.begin(), defensores.end());


        for (int i = 0; i < a; i++) {
            if (atacantes[i] < defensores[1]) {
                impedido = 'Y';
                break;
            }
        }

        cout << impedido << endl;
    }
    return 0;
}