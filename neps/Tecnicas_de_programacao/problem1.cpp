/*
Estratégia Gulosa
https://neps.academy/br/course/tecnicas-de-programacao/lesson/estrategia-gulosa
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, ans = 0, moedas[6] = {100, 50, 25, 10, 5, 1};
    cin >> n;

    for (int i = 0; i < 6 and n; i++)  {
        ans += n / moedas[i];
        n %= moedas[i];
    }

    cout << ans << endl;

    return 0;
}