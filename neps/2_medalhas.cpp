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
    
    vector<pair<int, int>> nadadores;
    for (int i = 1; i <= 3; i++) {
        int tempo; cin >> tempo;
        nadadores.push_back({tempo, i});
    }

    sort(nadadores.begin(), nadadores.end());

    for (int i = 0; i < 3; i++) cout << nadadores[i].second << endl;
    
    return 0; 
}
