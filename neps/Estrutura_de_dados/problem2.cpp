/*
Expressões
https://neps.academy/br/course/estruturas-de-dados-basicas/lesson/expressoes
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

int main() { _
    
    int n; cin >> n;
    while (n--) {
        string inp; cin >> inp;
        stack<char> exp;
        bool definido = true;
        int n = inp.size();
        for (int i = 0; i < n and definido; i++) {
            char c = inp[i];
            if (c == '(' or c == '[' or c == '{') exp.push(c);
            else if (exp.empty()) definido = false;
            else if (c == ')' and exp.top() != '(') definido = false;
            else if (c == ']' and exp.top() != '[') definido = false;
            else if (c == '}' and exp.top() != '{') definido = false;
            else exp.pop();
        }
        if (!exp.empty()) definido = false;
        if (definido) cout << "S" << endl;
        else cout << "N" << endl;
    }
    return 0;
}
