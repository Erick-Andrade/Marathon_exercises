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
    int algarismos[10] = {0};

    while (n--) {
        string num; cin >> num;
        int size = num.size();
        for (int i = 0; i < size; i++) {
            algarismos[num[i] - 48]++;
        }
    }

    for (int i = 0; i < 10; i++) cout << i << " - " << algarismos[i] << endl;
    return 0;
 
}