// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e5+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

int n, k, vet[MAX];

bool binary_search(int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (vet[mid] == x) return true;
        else if (vet[mid] > x) r = mid - 1;
        else l = mid + 1;
    }

    return false;
}

int main() { _
    
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> vet[i];
    while (k--) {
        int x; cin >> x;
        if (binary_search(x)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
