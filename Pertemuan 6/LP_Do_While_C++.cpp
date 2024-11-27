#include <iostream>

using namespace std;

int main() {
    int angka;
    char pilihan;

    do {
        cout << "Masukkan sebuah angka: ";
        cin >> angka;

        if (angka % 2 == 0) {
            cout << angka << " adalah angka genap." << endl;
        } else {
            cout << angka << " adalah angka ganjil." << endl;
        }

        cout << "Apakah Anda ingin memasukkan angka lain? (y/n): ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y'); // Terus meminta input selama pengguna memilih 'y'

    cout << "Terima kasih!" << endl;
    return 0;
}
