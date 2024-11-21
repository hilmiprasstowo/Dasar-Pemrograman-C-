#include <iostream>
using namespace std;

int main() {
    char skala_asal, skala_tujuan;
    double panjang_asal, panjang_tujuan;

    cout << "Masukkan skala asal (M/K/C): ";
    cin >> skala_asal;
    cout << "Masukkan panjang asal dalam " << skala_asal << ": ";
    cin >> panjang_asal;
    cout << "Masukkan skala tujuan (M/K/C): ";
    cin >> skala_tujuan;


    // Logika konversi berdasarkan skala
    if (skala_asal == 'M') {
        if (skala_tujuan == 'M') {
            panjang_tujuan = panjang_asal;
        } else if (skala_tujuan == 'K') {
            panjang_tujuan = panjang_asal / 1000;
        } else if (skala_tujuan == 'C') {
            panjang_tujuan = panjang_asal * 100;
        } else {
            cout << "Skala tujuan tidak valid!" << endl;
            return 1;
        }
    } else if (skala_asal == 'K') {
        if (skala_tujuan == 'M') {
            panjang_tujuan = panjang_asal * 1000;
        } else if (skala_tujuan == 'K') {
            panjang_tujuan = panjang_asal;
        } else if (skala_tujuan == 'C') {
            panjang_tujuan = panjang_asal * 100000;
        } else {
            cout << "Skala tujuan tidak valid!" << endl;
            return 1;
        }
    } else if (skala_asal == 'C') {
        if (skala_tujuan == 'M') {
            panjang_tujuan = panjang_asal / 100;
        } else if (skala_tujuan == 'K') {
            panjang_tujuan = panjang_asal / 100000;
        } else if (skala_tujuan == 'C') {
            panjang_tujuan = panjang_asal;
        } else {
            cout << "Skala tujuan tidak valid!" << endl;
            return 1;
        }
    } else {
        cout << "Skala asal tidak valid!" << endl;
        return 1;
    }

    // Output hasil konversi
    cout << "Anda mengkonversi dari " << skala_asal << " = " << panjang_asal
         << " ke " << skala_tujuan << " = " << panjang_tujuan << endl;

    return 0;
}

