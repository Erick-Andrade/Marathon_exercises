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

int f91(int n) {
    if (n >= 101) return n - 10;
    return f91(f91(n+11));
}

int main() { _
    
    int n;
    while (cin >> n and n) {
        cout << "f91(" << n << ") = " << f91(n) << endl;
    }
    return 0;
}