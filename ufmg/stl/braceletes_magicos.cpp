// https://br.spoj.com/problems/BRACELMG/

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e5+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    
    int t; cin >> t;
    while (t--) {
        string seq, brac; cin >> seq >> brac;
        int sizeSeq = seq.size(), sizeBrac = brac.size();
        int ans = 0;

        for (int i = 0; i < sizeBrac; i++) {
            string word = "";
            for (int j = i; j < i + sizeSeq; j++) {
                word += brac[j % sizeBrac];
            }

            int normal = 1, invertido = 1;
            for (int j = 0; j < sizeSeq; j++) {
                if (word[j] != seq[j]) normal = 0;
                if (word[sizeSeq-1-j] != seq[j]) invertido = 0;
            }

            if (normal or invertido) {
                ans = 1;
                break;
            }
        }

        if (ans) cout << "S" << endl;
        else cout << "N" << endl;
    }
    return 0;
}
