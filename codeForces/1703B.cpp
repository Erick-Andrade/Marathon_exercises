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
 
    int t, n, problems[26]; cin >> t;
    string inp;

    while (t--) {
        memset(problems, 0, sizeof problems);
        cin >> n >> inp;
        for (char c: inp) problems[c-65]++;
        int ballons = n;
        for (int i = 0; i < 26; i++) if (problems[i]) ballons++;
        cout << ballons << endl;
    }
    return 0;
}