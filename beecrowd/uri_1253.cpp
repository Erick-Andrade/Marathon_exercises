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

    int n; cin >> n;
    char l[26];
    char c = 'A';
    for (int i = 0; i < 26; i++) {
        l[i] = c;
        c++;
    }

    while (n--) {
        string inp;
        int qtd;
        cin >> inp >> qtd;
        for (int i = 0; i < inp.size(); i++) {
            int index = ((inp[i]-65)-qtd)%26;
            if (index < 0) index = 26 + index;
            inp[i] = l[index];
        }
        cout << inp << endl;
    }
     
    return 0;
}