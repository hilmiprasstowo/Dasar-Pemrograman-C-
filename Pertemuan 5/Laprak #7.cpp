#include <iostream>

using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka bulat positif: ";
    cin >> angka;

    switch (angka) {
        case 1:
            cout << "Satu!!";
            break;
        case 2:
            cout << "Dua!!";
            break;
        case 3:
            cout << "Tiga!!";
            break;
        default:
            cout << "Angka lainnya";
            break;
    }

    return 0;
}
