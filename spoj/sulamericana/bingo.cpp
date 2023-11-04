#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 91;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _

    int n, b;
    int possivel[MAX];
    while (cin >> n >> b and n and b) {
        memset(possivel, 0, sizeof(possivel));
        possivel[0] = 1; // ele pode pegar a mesma bola
        vector<int> sobrou(b);
        char ans = 'Y';
        for (int i = 0; i < b; i++) cin >> sobrou[i];
        for (int i = 0; i < b; i++) {
            for (int j = i + 1; j < b; j++) {
                int dif = abs(sobrou[i] - sobrou[j]);
                possivel[dif] = 1;
            }
        }

        for (int i = 0; i <= n; i++) if (possivel[i] == 0) {
            ans = 'N';
            break;
        } 

        cout << ans << endl;
    }
    return 0;
}