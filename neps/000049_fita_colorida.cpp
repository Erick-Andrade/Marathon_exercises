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
 
int main() { 
    vector <int> zero;
    int n;
    cin >> n;

    zero.push_back(-999999999);
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x == 0) zero.push_back(i);
    }
    zero.push_back(999999999);

    for(int i=0, j=0; i<n; i++){
        if(zero[j+1] == i) j++;

        cout << min(9, min(abs(zero[j]-i), abs(zero[j+1]-i))) << " ";
    }
    
    cout << endl;
    return 0;
}