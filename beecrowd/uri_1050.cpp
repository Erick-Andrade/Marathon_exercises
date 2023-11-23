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
 
    map<int, string> cities;
    cities.insert({61, "Brasilia"});
    cities.insert({71, "Salvador"});
    cities.insert({11, "Sao Paulo"});
    cities.insert({21, "Rio de Janeiro"});
    cities.insert({32, "Juiz de Fora"});
    cities.insert({19, "Campinas"});
    cities.insert({27, "Vitoria"});
    cities.insert({31, "Belo Horizonte"});

    int ddd; cin >> ddd;
    if (cities.find(ddd) != cities.end()) cout << cities[ddd] << endl;
    else cout << "DDD nao cadastrado" << endl;
    return 0;
}