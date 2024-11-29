#include <iostream>
#include <cmath>
using namespace std;

int hitungLuasPersegiPanjang(int panjang, int lebar) {
    return panjang * lebar;
}

int hitungKelilingPersegiPanjang(int panjang, int lebar) {
    return 2 * (panjang + lebar);
}

int hitungLuasPersegi(int sisi) {
    return pow(sisi, 2);
}

int hitungKelilingPersegi(int sisi) {
    return 4 * sisi;
}

float hitungLuasSegitiga(int alas, int tinggi) {
    return 0.5 * alas * tinggi;
}

float hitungKelilingSegitiga(int sisi1, int sisi2, int sisi3) {
    return sisi1 + sisi2 + sisi3;
}

int main() {
    int pilihan, panjang, lebar, sisi, alas, tinggi, sisi1, sisi2, sisi3;

    cout << "Pilih bentuk yang ingin dihitung:\n";
    cout << "1. Persegi Panjang\n";
    cout << "2. Persegi\n";
    cout << "3. Segitiga\n";
    cout << "Pilihan Anda: ";
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "Masukkan panjang persegi panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar persegi panjang: ";
        cin >> lebar;

        cout << "Luas Persegi Panjang: " << hitungLuasPersegiPanjang(panjang, lebar) << endl;
        cout << "Keliling Persegi Panjang: " << hitungKelilingPersegiPanjang(panjang, lebar) << endl;
    } else if (pilihan == 2) {
        cout << "Masukkan panjang sisi persegi: ";
        cin >> sisi;

        cout << "Luas Persegi: " << hitungLuasPersegi(sisi) << endl;
        cout << "Keliling Persegi: " << hitungKelilingPersegi(sisi) << endl;
    } else if (pilihan == 3) {
        cout << "Masukkan alas segitiga: ";
        cin >> alas;
        cout << "Masukkan tinggi segitiga: ";
        cin >> tinggi;

        cout << "Luas Segitiga: " << hitungLuasSegitiga(alas, tinggi) << endl;

        cout << "Masukkan panjang sisi 1 segitiga: ";
        cin >> sisi1;
        cout << "Masukkan panjang sisi 2 segitiga: ";
        cin >> sisi2;
        cout << "Masukkan panjang sisi 3 segitiga: ";
        cin >> sisi3;

        cout << "Keliling Segitiga: " << hitungKelilingSegitiga(sisi1, sisi2, sisi3) << endl;
    } else {
        cout << "Pilihan tidak valid.\n";
    }

    return 0;
}

