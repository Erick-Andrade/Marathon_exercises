// https://www.beecrowd.com.br/judge/pt/problems/view/2653?origem=1

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e5+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    
    string inp;
    set<string> joias;
    while (cin >> inp) joias.insert(inp);
    cout << joias.size() << endl;
    return 0;
}
