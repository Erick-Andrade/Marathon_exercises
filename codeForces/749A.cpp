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

    int n, aux = 0, primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23};
    vector<int> ans;
    cin >> n;
    while (n) {
        int qtd = n / primes[aux];
        while (qtd--) ans.push_back(primes[aux]);
        int res = n % primes[aux];
        if (res == 1) {
            ans.pop_back();
            n = primes[aux] + 1;
        } else n = res;
    
        aux++;
    }

    int size = ans.size();
    cout << size << endl;
    for (int i = 0; i < size; i++) cout << ans[i] << " ";
    cout << endl;


    return 0;
}