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
    map<int, string> months;
    months.insert({1, "January"});
    months.insert({2, "February"});
    months.insert({3,"March"});
    months.insert({4,"April"});
    months.insert({5,"May"});
    months.insert({6,"June"});
    months.insert({7,"July"});
    months.insert({8,"August"});
    months.insert({9,"September"});
    months.insert({10,"October"});
    months.insert({11,"November"});
    months.insert({12,"December"});

    cout << months[n] << endl;
    return 0;
}