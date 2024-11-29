#include <iostream>
using namespace std;

string cekGenapGanjil(int angka) {
    if (angka % 2 == 0)
        return "Genap";
    else
        return "Ganjil";
}

int main() {
    int angka;

    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    cout << "Angka " << angka << " adalah " << cekGenapGanjil(angka) << endl;

    return 0;
}

