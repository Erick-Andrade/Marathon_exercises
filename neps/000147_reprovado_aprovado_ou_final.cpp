#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 110;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    
    int n1, n2, average; cin >> n1 >> n2; 
    average = (n1 * 2 + n2 * 3) / 5.0;
    if (average >= 7) cout << "Aprovado" << endl;
    else if (average >= 3) cout << "Final" << endl;
    else cout << "Reprovado" << endl;
    return 0; 
}