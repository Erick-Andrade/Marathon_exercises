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
    
    int a, b, c, maior; cin >> a >> b >> c;
    maior = (a + b + abs(a-b)) / 2;
    maior = (maior + c + abs(maior-c)) / 2;
    cout << maior << " eh o maior" << endl;

    return 0;
}
