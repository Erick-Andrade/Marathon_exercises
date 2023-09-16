/*
Vestibular
https://neps.academy/br/course/do-c-para-o-c%2B%2B/lesson/vestibular
*/

#include <iostream>

using namespace std;

int main() {

    int n, acertos = 0; 
    string gabarito, opcoes;
    cin >> n >> gabarito >> opcoes;
    for (int i = 0; i < n; i++) if (gabarito[i] == opcoes[i]) acertos++;
    cout << acertos << endl;
    return 0;
}