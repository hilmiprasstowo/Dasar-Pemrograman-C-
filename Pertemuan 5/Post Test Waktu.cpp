#include <iostream>
using namespace std;

int main() {
    char skala_asal, skala_tujuan;
    double waktu_asal, waktu_tujuan;

    cout << "Masukkan skala asal (S/M/H): ";
    cin >> skala_asal;
    cout << "Masukkan waktu asal dalam " << skala_asal << ": ";
    cin >> waktu_asal;
    cout << "Masukkan skala tujuan (S/M/H): ";
    cin >> skala_tujuan;


    // Logika konversi berdasarkan skala
    if (skala_asal == 'S') {
        if (skala_tujuan == 'S') {
            waktu_tujuan = waktu_asal;
        } else if (skala_tujuan == 'M') {
            waktu_tujuan = waktu_asal / 60;
        } else if (skala_tujuan == 'H') {
            waktu_tujuan = waktu_asal / 3600;
        } else {
            cout << "Skala tujuan tidak valid!" << endl;
            return 1;
        }
    } else if (skala_asal == 'M') {
        if (skala_tujuan == 'S') {
            waktu_tujuan = waktu_asal * 60;
        } else if (skala_tujuan == 'M') {
            waktu_tujuan = waktu_asal;
        } else if (skala_tujuan == 'H') {
            waktu_tujuan = waktu_asal / 60;
        } else {
            cout << "Skala tujuan tidak valid!" << endl;
            return 1;
        }
    } else if (skala_asal == 'H') {
        if (skala_tujuan == 'S') {
            waktu_tujuan = waktu_asal * 3600;
        } else if (skala_tujuan == 'M') {
            waktu_tujuan = waktu_asal * 60;
        } else if (skala_tujuan == 'H') {
            waktu_tujuan = waktu_asal;
        } else {
            cout << "Skala tujuan tidak valid!" << endl;
            return 1;
        }
    } else {
        cout << "Skala asal tidak valid!" << endl;
        return 1;
    }

    // Output hasil konversi
    cout << "Anda mengkonversi dari " << skala_asal << " = " << waktu_asal
         << " ke " << skala_tujuan << " = " << waktu_tujuan << endl;

    return 0;
}

