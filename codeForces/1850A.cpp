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

    int t; cin >> t;
    while (t--) {
        int arr[3];
        for (int i = 0; i < 3; i++) cin >> arr[i];
        sort(arr, arr+3, greater<int>());
        int sum = arr[0] + arr[1];
        if (sum < 10) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}