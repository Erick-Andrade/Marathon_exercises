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

int main() { 
    
    int n; cin >> n;
    cin.get();
    while (n--) {
        string inp; getline(cin, inp);
        int size = inp.size();
        
        for (int i = 0; i < size; i++) {
            if (inp[i] >= 'a' and inp[i] <= 'z') inp[i] += 3;
            else if (inp[i] >= 'A' and inp[i] <= 'Z') inp[i] += 3;
        }

        
        reverse(inp.begin(), inp.end());

        int metade = size / 2;
        for (int i = metade; i < size; i++) inp[i]--;

        cout << inp << endl;

    }
    return 0;
}