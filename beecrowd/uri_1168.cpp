#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 110;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    
    int n; cin >> n;
    while (n--) {
        string inp; cin >> inp;
        int leds = 0;
        for (char c: inp) {
            if (c == '0') leds += 6;
            else if (c == '1') leds += 2;
            else if (c == '2') leds += 5;
            else if (c == '3') leds += 5;
            else if (c == '4') leds += 4;
            else if (c == '5') leds += 5;
            else if (c == '6') leds += 6;
            else if (c == '7') leds += 3;
            else if (c == '8') leds += 7;
            else leds += 6;
        }

        cout << leds << " leds" << endl;
    }
    return 0;
}