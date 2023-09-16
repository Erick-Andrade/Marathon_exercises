/*
Copa do Mundo
https://neps.academy/br/course/estruturas-de-dados-basicas/lesson/copa-do-mundo
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
    
    queue<pair<char, char>> jogos;
    char timeA = 'A', timeB = 'B';
    for (int i = 0; i < 8; i++) {
        jogos.push(make_pair(timeA, timeB));
        timeA += 2;
        timeB += 2;
    }

    char ganhador1 = '0', ganhador2 = '0', vencedor;

    for (int i = 0; i < 15; i++) {
        int n, m; cin >> n >> m;
        pair<char, char> jogo = jogos.front();
        
        if (ganhador1 == '0') {
            if (n > m) ganhador1 = jogo.first;
            else ganhador1 = jogo.second;
            jogos.pop();
        } else {
            if (n > m) ganhador2 = jogo.first;
            else ganhador2 = jogo.second;
            jogos.pop();
            jogos.push(make_pair(ganhador1, ganhador2));
            ganhador1 = '0';
        }
        vencedor = (n > m) ? ganhador1 : ganhador2;
    }

    cout << vencedor << endl;

    return 0;
}
