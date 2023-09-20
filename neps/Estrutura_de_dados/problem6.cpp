/*
Repositórios
https://neps.academy/br/course/estruturas-de-dados-basicas/lesson/repositorios
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
    
    int c, n; cin >> c >> n;
    map<int, int> programas;
    while (c--) {
        int p, v; cin >> p >> v;
        programas.insert({p, v});
    }

    map<int, int> precisa_instalar;
    while(n--) {
        int p, v; cin >> p >> v;
        if (programas.find(p) != programas.end()) {
            int versao = programas[p];
            if (v > versao) {
                programas[p] = v;
                if (precisa_instalar.find(p) != precisa_instalar.end()) {
                    precisa_instalar[p] = v;
                } else {
                    precisa_instalar.insert({p, v});
                }
            }
        } else {
            programas[p] = v;
            precisa_instalar[p] = v;
        }

    }

    for (auto [programa, versao]: precisa_instalar) cout << programa << " " << versao << endl;
    return 0;
}
