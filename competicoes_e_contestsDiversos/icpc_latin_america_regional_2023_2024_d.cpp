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
    int n, g; cin >> n;
    string secret_word;
    vector<string> words(n);
    cin >> secret_word;
    words[0] = secret_word;
    for (int i = 1; i < n; i++) cin >> words[i];
    cin >> g;

    int qtd_letters[26] = {0}; // secret word
    for (char c: secret_word) qtd_letters[c-97]++;
    while (g--) {
        string feedback; cin >> feedback;
        int qtd = 0;

        for (string word: words) {
            int aux = 0, ok = 1;
            for (char l: word) {
                if (feedback[aux] == 'X') {
                    if (qtd_letters[l-97] > 0) {
                        ok = 0;
                        break;
                    }

                    if (secret_word[aux] == l) {
                        ok = 0;
                        break;
                    }
                } else if (feedback[aux] == '*') {
                    if (secret_word[aux] != l) {
                        ok = 0;
                        break;
                    }
                } else {
                    if (secret_word[aux] == l) {
                        ok = 0;
                        break;
                    }

                    if (qtd_letters[l-97] == 0) {
                        ok = 0;
                        break;
                    }
                }
                aux++;
            }

            if (ok) qtd++;
        }

        cout << qtd << endl;
    }
}