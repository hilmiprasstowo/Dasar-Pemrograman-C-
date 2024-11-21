#include <iostream>
using namespace std;

int main() {
    char skala_asal, skala_tujuan;
    double berat_asal, berat_tujuan;

    cout << "Masukkan skala asal (G/K/T): "; // G = gram, K = kilogram, T = ton
    cin >> skala_asal;
    cout << "Masukkan berat asal dalam " << skala_asal << ": ";
    cin >> berat_asal;
    cout << "Masukkan skala tujuan (G/K/T): ";
    cin >> skala_tujuan;

    // Logika konversi berdasarkan skala
    if (skala_asal == 'G') {
        if (skala_tujuan == 'G') {
            berat_tujuan = berat_asal;
        } else if (skala_tujuan == 'K') {
            berat_tujuan = berat_asal / 1000;
        } else if (skala_tujuan == 'T') {
            berat_tujuan = berat_asal / 1000000;
        } else {
            cout << "Skala tujuan tidak valid!" << endl;
            return 1;
        }
    } else if (skala_asal == 'K') {
        if (skala_tujuan == 'G') {
            berat_tujuan = berat_asal * 1000;
        } else if (skala_tujuan == 'K') {
            berat_tujuan = berat_asal;
        } else if (skala_tujuan == 'T') {
            berat_tujuan = berat_asal / 1000;
        } else {
            cout << "Skala tujuan tidak valid!" << endl;
            return 1;
        }
    } else if (skala_asal == 'T') {
        if (skala_tujuan == 'G') {
            berat_tujuan = berat_asal * 1000000;
        } else if (skala_tujuan == 'K') {
            berat_tujuan = berat_asal * 1000;
        } else if (skala_tujuan == 'T') {
            berat_tujuan = berat_asal;
        } else {
            cout << "Skala tujuan tidak valid!" << endl;
            return 1;
        }
    } else {
        cout << "Skala asal tidak valid!" << endl;
        return 1;
    }

    // Output hasil konversi
    cout << "Anda mengkonversi dari " << skala_asal << " = " << berat_asal
         << " ke " << skala_tujuan << " = " << berat_tujuan << endl;

    return 0;
}

