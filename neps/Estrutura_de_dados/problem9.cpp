/*
Troca de Cartas
https://neps.academy/br/course/estruturas-de-dados-basicas/lesson/troca-de-cartas
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
    
    int a, b; cin >> a >> b;
    set<int> alice, beatriz, beatrizNaoTem, aliceNaoTem;
    while (a--) {
        int x; cin >> x;
        alice.insert(x);
    }
    
    while (b--) {
        int x; cin >> x;
        beatriz.insert(x);        
    }

    set<int>::iterator al = alice.begin(), be = beatriz.begin();

    // verifica as cartas que beatriz não tem
    while (al != alice.end() and be != beatriz.end()) {
        while (al != alice.end() and *al <= *be) {
            if (*al != *be) {
                beatrizNaoTem.insert(*al);
            }
            al++;
        }

        be++;
    }

    while (al != alice.end()) {
        beatrizNaoTem.insert(*al);
        al++;
    }

    // verifica as cartas que alice não tem
    al = alice.begin(), be = beatriz.begin();
    while (al != alice.end() and be != beatriz.end()) {
        while (be != beatriz.end() and *al >= *be) {
            if (*al != *be) {
                aliceNaoTem.insert(*be);
            }
            be++;
        }

        al++;
    }

    while (be != beatriz.end()) {
        aliceNaoTem.insert(*be);
        be++;
    }

    // resposta
    int ans = min(beatrizNaoTem.size(), aliceNaoTem.size());
    cout << ans << endl;
    return 0;
}
