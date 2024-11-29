#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 9.0, x = 2.0, y = 3.0;

    cout << "sqrt(" << a << ") = " << sqrt(a) << endl;  // Menghitung akar kuadrat
    cout << "pow(" << a << ", 2) = " << pow(a, 2) << endl;  // Menghitung pangkat
    cout << "abs(" << -a << ") = " << abs(-a) << endl;  // Menghitung nilai mutlak
    cout << "ceil(" << x << ") = " << ceil(x) << endl;  // Membulatkan ke atas
    cout << "floor(" << x << ") = " << floor(x) << endl;  // Membulatkan ke bawah
    cout << "sin(" << y << ") = " << sin(y) << endl;  // Menghitung sin
    cout << "cos(" << y << ") = " << cos(y) << endl;  // Menghitung cos
    cout << "tan(" << y << ") = " << tan(y) << endl;  // Menghitung tan
    cout << "exp(" << x << ") = " << exp(x) << endl;  // Menghitung eksponensial (e^x)
    cout << "log(" << a << ") = " << log(a) << endl;  // Menghitung logaritma natural (ln)

    return 0;
}

