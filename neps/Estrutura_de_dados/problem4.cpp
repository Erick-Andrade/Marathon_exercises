/*
Times
https://neps.academy/br/course/estruturas-de-dados-basicas/lesson/times
*/

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
    
    int n, t; cin >> n >> t;
    priority_queue<pair<int, string>, vector<pair<int, string>>, less<pair<int, string>>> jogadores;
    for (int i = 0; i < n; i++) {
        int hab;
        string name;
        cin >> name >> hab;
        jogadores.push(make_pair(hab, name));
    }

    vector<vector<string>> times(t);
    int i = 0;
    while (!jogadores.empty()) {
        if (i == t) i = 0;
        times[i].push_back(jogadores.top().second);
        jogadores.pop();
        i++;
    }

    for (int i = 0; i < t; i++) sort(times[i].begin(), times[i].end());

    for (int i = 0; i < t; i++) {
        cout << "Time " << i + 1 << endl;
        for (int j = 0; j < (int) times[i].size(); j++) cout << times[i][j] << endl;
        cout << endl;
    }
    return 0;
}
