/*
Potência simples
https://neps.academy/br/course/do-c-para-o-c%2B%2B/lesson/potencia-simples
*/

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    double x, y; cin >> x >> y;
    double power = pow(x, y);
    cout << setprecision(4) << fixed << power << endl;

    return 0;
}
