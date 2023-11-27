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

    int num[4], x = 1;
    for (int i = 0; i < 4; i++) cin >> num[i];
    sort(num, num + 4);

    /*
    a + b = num[0]
    a + c = num[1]
    b + c = num[2]
    a + b + c = num[3]

    a + b + c = num[3] => a + num[2] = num[3] => a = num[3] - num[2]

    a + b = num[0] => num[3] - num[2] + b = num[0] => b = num[0] + num[2] - num[3]

    b + c = num[2] => num[0] + num[2] - num[3] + c = num[2] => c = num[3] - num[0]
    */
    int a = num[3] - num[2], b = num[0] + num[2] - num[3], c = num[3] - num[0];
    cout << a << " " << b << " " << c << endl;
    return 0;
}