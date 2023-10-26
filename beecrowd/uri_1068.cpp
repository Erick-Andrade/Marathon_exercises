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
    while (cin >> inp) {
        stack<char> stack;
        bool correct = true;
        for (char c: inp) {
            if (c == '(') stack.push(c);
            else if (c == ')') {
                if (stack.empty()) {
                    correct = false;
                    break;
                }
                stack.pop();
            }
        }

        if (!stack.empty()) correct = false;
        if (correct) cout << "correct" << endl;
        else cout << "incorrect" << endl;
    }
    return 0;
}