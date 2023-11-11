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
    int k, size;
    cin >> inp >> k;
    size = inp.size();
    for (int i = 0; i < k; i++) {
        vector<char> ord;
        for (int j = i; j < size; j+=k) ord.push_back(inp[j]);
        sort(ord.begin(), ord.end());
        int aux = 0;
        for (int j = i; j < size; j+=k) inp[j] = ord[aux++];
    }

    cout << inp << endl;

}