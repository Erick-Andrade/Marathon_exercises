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
    
    int n;
    int votos[101];
    while (cin >> n and n) {
        memset(votos, 0, sizeof(votos));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x; cin >> x;
                if (x) votos[j]++;
            }
        }

        int maior = 0;
        for (int i = 0; i< n; i++) maior = max(maior, votos[i]);
        cout << maior << endl;
        
    }
    return 0;
}