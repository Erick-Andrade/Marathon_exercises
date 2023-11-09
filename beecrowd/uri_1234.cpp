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
    
    string inp;
    while (getline(cin, inp)) {
        int upper = 1, size = inp.size();
        for (int i = 0; i < size; i++) {
            if (inp[i] != ' ') {
                if (upper and inp[i] >= 'a' and inp[i] <= 'z') inp[i] -= 32;
                else if (upper = 1 and inp[i] >= 'A' and inp[i] <= 'Z') upper = 1;
                upper = (upper == 1) ? 0: 1;                
            }
            

        }
        cout << inp << endl;
    }
    return 0;
}