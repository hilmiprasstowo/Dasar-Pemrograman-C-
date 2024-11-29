#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

float hitungVolumeKubus(float sisi) {
    return pow(sisi, 3);
}

float hitungLuasPermukaanKubus(float sisi) {
    return 6 * pow(sisi, 2);
}

float hitungVolumeBalok(float panjang, float lebar, float tinggi) {
    return panjang * lebar * tinggi;
}

float hitungLuasPermukaanBalok(float panjang, float lebar, float tinggi) {
    return 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
}

float hitungVolumeBola(float radius) {
    return (4.0 / 3.0) * PI * pow(radius, 3);
}

float hitungVolumeKerucut(float radius, float tinggi) {
    return (1.0 / 3.0) * PI * pow(radius, 2) * tinggi;
}

int main() {
    int pilihan;
    float sisi, panjang, lebar, tinggi, radius;
    char ulangi;

    while (true) {
        cout << "Pilih bentuk untuk menghitung volume dan luas permukaan:\n";
        cout << "1. Kubus\n";
        cout << "2. Balok\n";
        cout << "3. Bola\n";
        cout << "4. Kerucut\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Masukkan panjang sisi kubus: ";
            cin >> sisi;
            cout << "Volume Kubus: " << hitungVolumeKubus(sisi) << endl;
            cout << "Luas Permukaan Kubus: " << hitungLuasPermukaanKubus(sisi) << endl;
        } 
        else if (pilihan == 2) {
            cout << "Masukkan panjang balok: ";
            cin >> panjang;
            cout << "Masukkan lebar balok: ";
            cin >> lebar;
            cout << "Masukkan tinggi balok: ";
            cin >> tinggi;
            cout << "Volume Balok: " << hitungVolumeBalok(panjang, lebar, tinggi) << endl;
            cout << "Luas Permukaan Balok: " << hitungLuasPermukaanBalok(panjang, lebar, tinggi) << endl;
        } 
        else if (pilihan == 3) {
            cout << "Masukkan radius bola: ";
            cin >> radius;
            cout << "Volume Bola: " << hitungVolumeBola(radius) << endl;
        } 
        else if (pilihan == 4) {
            cout << "Masukkan radius kerucut: ";
            cin >> radius;
            cout << "Masukkan tinggi kerucut: ";
            cin >> tinggi;
            cout << "Volume Kerucut: " << hitungVolumeKerucut(radius, tinggi) << endl;
        } 
        else {
            cout << "Pilihan tidak valid.\n";
        }

        cout << "Apakah Anda ingin mengulangi program? (y/n): ";
        cin >> ulangi;

        if (ulangi == 'n' || ulangi == 'N') {
            break;
        }
        system("cls");
    }

    cout << "Terima kasih! Program selesai.\n";

    return 0;
}

/*
Rumus untuk Kubus:
Volume Kubus = sisi^3
Luas Permukaan Kubus = 6 * sisi^2

Rumus untuk Balok:
Volume Balok = panjang * lebar * tinggi
Luas Permukaan Balok = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi)

Rumus untuk Bola:
Volume Bola = (4/3) * pi * radius^3

Rumus untuk Kerucut:
Volume Kerucut = (1/3) * pi * radius^2 * tinggi
*/

