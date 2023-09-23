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
    int vet[10];
    for (int i = 0; i < 10; i++) cin >> vet[i];
    int x; cin >> x;
    vector<int> aparicoes;
    for (int i = 0; i < 10; i++) if (vet[i] == x) aparicoes.push_back(i);

    int size = aparicoes.size();

    if (size) {
        cout << size << endl;
        for (int i = 0; i < size; i++) cout << aparicoes[i] << " ";
        cout << endl;
    } else {
        cout << "Mia x" << endl;
    }
    
    return 0;
 
}