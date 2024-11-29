#include <iostream>
using namespace std;

int perpangkatan(int angka, int pangkat) {
    int hasil = 1;
    for (int i = 0; i < pangkat; i++) {
        hasil *= angka;
    }
    return hasil;
}

int main() {
    int angka, pangkat;

    cout << "Masukan angka: ";
    cin >> angka;
    cout << "Masukan pangkat: ";
    cin >> pangkat;

    cout << "Hasil " << angka << "^" << pangkat << " = " << perpangkatan(angka, pangkat) << endl;

    return 0;
}

