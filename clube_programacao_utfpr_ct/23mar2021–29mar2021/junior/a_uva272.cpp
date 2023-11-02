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
    string inp;
    int begin = 1;
    while (getline(cin, inp)) {
        int size = inp.size();
        string new_inp = "";
        for (char c: inp) {
            if (c == '"') {
                if (begin) new_inp += "``";
                else new_inp += "''";
                begin = (begin == 1) ? 0: 1;
            } else new_inp += c;
        }

        cout << new_inp << endl;
    }
    return 0;
}