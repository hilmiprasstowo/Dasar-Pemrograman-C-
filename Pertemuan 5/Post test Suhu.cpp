#include <iostream>
using namespace std;

int main() {
    char skala_asal, skala_tujuan;
    double suhu_asal, suhu_tujuan;

    cout << "Masukkan skala asal (C/K/F): ";
    cin >> skala_asal;
    cout << "Masukkan suhu asal dalam " << skala_asal << ": ";
    cin >> suhu_asal;
    cout << "Masukkan skala tujuan (C/K/F): ";
    cin >> skala_tujuan;

    // Logika konversi berdasarkan skala
    if (skala_asal == 'C') {
        if (skala_tujuan == 'C') {
            suhu_tujuan = suhu_asal;
        } else if (skala_tujuan == 'K') {
            suhu_tujuan = suhu_asal + 273;
        } else if (skala_tujuan == 'F') {
            suhu_tujuan = (9.0 / 5.0) * suhu_asal + 32;
        } else {
            cout << "Skala tujuan tidak valid!" << endl;
            return 1;
        }
    } else if (skala_asal == 'K') {
        if (skala_tujuan == 'C') {
            suhu_tujuan = suhu_asal - 273;
        } else if (skala_tujuan == 'K') {
            suhu_tujuan = suhu_asal;
        } else if (skala_tujuan == 'F') {
            suhu_tujuan = (9.0 / 5.0) * (suhu_asal - 273) + 32;
        } else {
            cout << "Skala tujuan tidak valid!" << endl;
            return 1;
        }
    } else if (skala_asal == 'F') {
        if (skala_tujuan == 'C') {
            suhu_tujuan = (5.0 / 9.0) * (suhu_asal - 32);
        } else if (skala_tujuan == 'K') {
            suhu_tujuan = (5.0 / 9.0) * (suhu_asal - 32) + 273;
        } else if (skala_tujuan == 'F') {
            suhu_tujuan = suhu_asal;
        } else {
            cout << "Skala tujuan tidak valid!" << endl;
            return 1;
        }
    } else {
        cout << "Skala asal tidak valid!" << endl;
        return 1;
    }

    // Output hasil konversi
    cout << "Anda mengkonversi dari " << skala_asal << " = " << suhu_asal
         << " ke " << skala_tujuan << " = " << suhu_tujuan << endl;

    return 0;
}

