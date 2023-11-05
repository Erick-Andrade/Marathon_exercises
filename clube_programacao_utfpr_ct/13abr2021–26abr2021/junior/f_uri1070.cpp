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
 
int main() { 

    int x; cin >> x;
    int qtd = 6;
    if (x % 2 == 0) x++;
    for (int i = x; qtd; i+=2) {
        cout << i << endl;
        qtd--;
    }
    return 0;
}