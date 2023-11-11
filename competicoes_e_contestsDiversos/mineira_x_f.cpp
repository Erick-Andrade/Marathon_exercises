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
    int m, n; cin >> n >> m;
    vector<vector<int>> mapa(n, vector<int>(m));
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> mapa[i][j];
    int maior = 0, sum;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m-1; j++) {
            sum = 1;
            while (j < m-1 and abs(mapa[i][j] - mapa[i][j+1]) <= 1) {
                sum++;
                j++;
            }

            maior = max(maior, sum);
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n-1; j++) {
            sum = 1;
            while (j < n-1 and abs(mapa[j][i] - mapa[j+1][i]) <= 1) {
                sum++;
                j++;
            }
            maior = max(maior, sum);
        }
    }
   


    cout << maior << endl;


}