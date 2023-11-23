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
 
    double salary, increase, newSalary;
    int percentage; 
    cin >> salary;
    if (salary > 2000) percentage = 4;
    else if (salary > 1200) percentage = 7;
    else if (salary > 800) percentage = 10;
    else if (salary > 400) percentage = 12;
    else percentage = 15;

    increase = salary * (percentage / 100.0);
    newSalary = salary + increase;

    cout << "Novo salario: " << setprecision(2) << fixed << newSalary << endl;
    cout << "Reajuste ganho: " << setprecision(2) << fixed << increase << endl;
    cout << "Em percentual: " << percentage << " %" << endl;
    return 0;
}