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

    int n, ans = -1, find = 0;
    string inp, cmp;
    cin >> n >> inp;

    for (int i = 0; i < n - 2 and find == 0; i++) {
        for (int j = i; j < i + 3; j++) cmp += inp[j];
        if (cmp == "ABC") {
            find = 1;
            ans = i + 1;
        }
        cmp = "";
    }
    cout << ans << endl;

    return 0;
}