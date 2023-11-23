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
 
    double n1, n2, n3, n4, average; cin >> n1 >> n2 >> n3 >> n4;
    average = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
    cout << "Media: " << setprecision(1) << fixed << average << endl;

    if (average >= 7) cout <<  "Aluno aprovado." << endl;
    else if (average < 5) cout << "Aluno reprovado." << endl;
    else {
        double n; cin >> n;
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame: " << setprecision(1) << fixed << n << endl;
        average = (average + n) / 2;
        if (average >= 5) cout << "Aluno aprovado." << endl;
        else cout << "Aluno reprovado." << endl;
        cout << "Media final: " << setprecision(1) << fixed << average << endl;
    }

    return 0;
}