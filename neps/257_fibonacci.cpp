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

int fib(int n) {
    if (n <= 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main() { _
    
    int n; cin >> n;
    cout << fib(n) << endl;
    return 0;
}
