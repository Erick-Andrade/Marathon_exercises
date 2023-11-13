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
    
    string regiaoNorte[7] = {"roraima", "acre", "amapa", "amazonas", "para", "rondonia", "tocantins"};
    string estado; cin >> estado;
    int norte = 0;
    for (int i = 0; i < 7; i++) if (regiaoNorte[i] == estado) norte = 1;

    if (norte) cout << "Regiao Norte" << endl;
    else cout << "Outra regiao" << endl; 
    return 0;
}