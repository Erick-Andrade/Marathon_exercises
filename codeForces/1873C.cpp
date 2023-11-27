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
 
int points[10][10] = {0};
int main() { 

    for (int i = 0; i < 5; i++) {
        for (int j = i; j < 10-i; j++) {
            points[i][j] = 1 + i;
            points[j][i] = 1 + i;
            points[j][9-i] = 1 + i;
            points[9-i][j] = 1 + i;
        }
    }


    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << points[i][j] << " ";
        }

        cout << endl;
    }


    
    return 0;
}