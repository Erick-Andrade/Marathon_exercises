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

bool fun(pair<string, int> a, pair<string, int> b) {
    if (a.second < b.second) return true;
    else if (a.second > b.second) return false;
    else if (a.first > b.first) return true;
    else return false; 
}

int main() { _
    
    int n, t = 1;

    while (cin >> n) {
        vector<pair<string, int>> alunos(n);
        for (int i = 0; i < n; i++) cin >> alunos[i].first >> alunos[i].second;
        sort(alunos.begin(), alunos.end(), fun);
        cout << "Instancia " << t << endl;
        cout << alunos[0].first << endl;
        t++;
    }
    return 0;
}