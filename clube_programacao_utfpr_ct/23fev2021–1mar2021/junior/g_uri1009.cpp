// https://www.beecrowd.com.br/judge/en/problems/view/1009?origem=1

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
 
    string name;
    double fixedSalary, sale, salary;
    cin >> name >> fixedSalary >> sale;
    salary = fixedSalary + (sale * 0.15);
    cout << "TOTAL = R$ " << setprecision(2) << fixed << salary << endl; 
    return 0;
}