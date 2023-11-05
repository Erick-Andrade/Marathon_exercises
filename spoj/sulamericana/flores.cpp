#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e3+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

string to_lower(string str) {
    string inp;
    for (int i = 0; i < (int) str.size(); i++) {
        if (str[i] >= 'A' and str[i] <= 'Z') inp += (str[i] + 32);
        else inp += str[i];
    }
    return inp;
}

bool is_tautograma(string str) {
    int comeco = 0;
    char l = str[0];
    for (int i = 1; i < str.size(); i++) {
        while (i < str.size() and str[i] == ' ') {
            i++;
            comeco = 1;
        }
        if (comeco) {
            if (str[i] != l) return false;
            comeco = 0;
        } 
    }

    return true;
}
int main() { _

    string inp;
    while(getline(cin, inp) and inp != "*") {
        inp = to_lower(inp);
        bool tautograma = is_tautograma(inp);
        if (tautograma) cout << "Y" << endl;
        else cout << "N" << endl;
    }
    return 0;
}