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
    
    int n; cin >> n;
    char nota;
    if (n > 85) nota = 'A';
    else if (n > 60) nota = 'B';
    else if (n > 35) nota = 'C';
    else if (n > 0) nota = 'D';
    else nota = 'E';
    cout << nota << endl;
    return 0;
}