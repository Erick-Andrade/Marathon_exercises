// https://br.spoj.com/problems/PALAVRMG/

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

bool ordenado(string palavra) {
    string newpalavra = palavra;
    for (int i = 0; i < newpalavra.size(); i++) newpalavra[i] = tolower(newpalavra[i]);
    for (int i = 1; i < newpalavra.size(); i++) if (newpalavra[i] <= newpalavra[i-1]) return false;

    return true;
}
int main() { _
    
    int p; cin >> p;
    while (p--) {
        string palavra; cin >> palavra;
        cout << palavra << ": ";
        if (ordenado(palavra))  cout << "O" << endl;
        else cout << "N" << endl;

    }
    return 0;
}
