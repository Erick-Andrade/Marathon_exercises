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
        
        double x1, y1, x2, y2, distance; cin >> x1 >> y1 >> x2 >> y2;
        distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
        cout << setprecision(4) << fixed << distance << endl;
        return 0;
    }
