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
    
    int number, worked_hours;
    double received_per_hour, salary;
    cin >> number >> worked_hours >> received_per_hour;
    salary = received_per_hour * worked_hours;
    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << setprecision(2) << fixed << salary << endl;
    
    return 0;
}
