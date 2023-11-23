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
 
    vector<int> nums(3), ord(3);
    for (int i = 0; i < 3; i++) {
        cin >> nums[i];
        ord[i] = nums[i];
    }

    sort(ord.begin(), ord.end());
    for (int i = 0; i < 3; i++) cout << ord[i] << endl;
    cout << endl;
    for (int i = 0; i < 3; i++) cout << nums[i] << endl;

    return 0;
}