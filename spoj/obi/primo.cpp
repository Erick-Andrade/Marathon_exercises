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

bool isPrimo(int n) {
    if (n == 1) return false;
    for (int i = 2; i < n; i++) if (n % i == 0) return false;
    return true;
}

int main() { _
    int n; cin >> n;
    if (isPrimo(n)) cout << "sim" << endl;
    else cout << "nao" << endl;
    return 0;
}