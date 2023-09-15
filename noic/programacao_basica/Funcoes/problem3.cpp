/*
Problema 3 - Fibonacci, Quantas Chamadass?
https://www.beecrowd.com.br/judge/pt/problems/view/1029?origem=1
*/

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
 
int fib(int x, int* num_calls) {
    (*num_calls)++;
    if (x <= 1) return x;
    return fib(x - 1, num_calls) + fib(x - 2, num_calls);
}

int main() { 
 
    int n; cin >> n;
    while (n--) {
        int x, num_calls = -1, result; cin >> x;
        // -1, pois ele conta a chamada do fib(x)

        result = fib(x, &num_calls);
        printf("fib(%d) = %d calls = %d\n", x, num_calls, result);
    }
    return 0;
 
}