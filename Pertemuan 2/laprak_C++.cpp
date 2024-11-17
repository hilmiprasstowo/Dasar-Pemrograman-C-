#include <iostream>
#include <string>  // Library untuk menggunakan tipe data string

using namespace std;

int main() {
    // Deklarasi variabel
    int angka;            // Tipe data int
    float pecahanKecil;   // Tipe data float
    double pecahanBesar;  // Tipe data double
    long angkaBesar;      // Tipe data long
    char karakter;        // Tipe data char
    string kalimat;       // Tipe data string

    // Memberi nilai pada variabel
    angka = 10;
    pecahanKecil = 5.5;
    pecahanBesar = 1234567.891234;
    angkaBesar = 1234567890;
    karakter = 'A';
    kalimat = "Belajar tipe data di C++";

    // Menampilkan nilai variabel
    cout << "Nilai int: " << angka << endl;
    cout << "Nilai float: " << pecahanKecil << endl;
    cout << "Nilai double: " << pecahanBesar << endl;
    cout << "Nilai long: " << angkaBesar << endl;
    cout << "Nilai char: " << karakter << endl;
    cout << "Nilai string: " << kalimat << endl;

    return 0;
}
