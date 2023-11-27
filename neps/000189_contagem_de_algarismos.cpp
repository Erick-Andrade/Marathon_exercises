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
    
    int n, alg[10] = {0}; cin >> n;
    while (n--) {
        string inp; cin >> inp;
        for (int i = 0; i < (int) inp.size(); i++) alg[inp[i]-48]++;
    }

    for (int i = 0; i < 10; i++) cout << i << " - "<< alg[i] << endl;

    return 0;
}