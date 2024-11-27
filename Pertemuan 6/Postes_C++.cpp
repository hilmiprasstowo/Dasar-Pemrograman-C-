#include <iostream>

using namespace std;

int main() {
    int angka;
    char pilihan;

    do {
        cout << "Masukkan angka positif untuk menghitung faktorial: ";
        cin >> angka;

        // Memeriksa apakah angka positif
        if (angka < 0) {
            cout << "Faktorial tidak terdefinisi untuk angka negatif." << endl;
        } else {
            // Menghitung faktorial
            long long faktorial = 1;
            for (int i = 1; i <= angka; i++) {
                faktorial *= i; // Mengalikan angka ke faktorial
            }
            cout << "Faktorial dari " << angka << " adalah: " << faktorial << endl;
        }

        cout << "Apakah Anda ingin menghitung faktorial dari angka lain? (y/n): ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y'); // Terus meminta input jika pengguna memilih 'y'

    cout << "Terima kasih telah menggunakan program ini!" << endl;
    return 0;
}
