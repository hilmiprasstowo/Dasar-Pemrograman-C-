#include <iostream>
using namespace std;

int main() {
    // Variabel dengan tipe data beragam
    string nama = "Ahmad Budi Santoso";
    int tanggalLahir = 1;
    int tahunLahir = 1990;
    char jenisKelamin = 'L'; // 'L' untuk Laki-laki, 'P' untuk Perempuan
    bool statusPernikahan = false; // false = Belum Kawin, true = Kawin
    string berlakuHingga = "Seumur Hidup"; // Tipe data string
    
    // Output sederhana
    cout << "========== KTP ==========" << endl;
    cout << "Nama              : " << nama << endl;
    cout << "Tanggal Lahir     : " << tanggalLahir << "-01-" << tahunLahir << endl;
    cout << "Jenis Kelamin     : " << (jenisKelamin == 'L' ? "Laki-laki" : "Perempuan") << endl;
    cout << "Status Perkawinan : " << (statusPernikahan ? "Kawin" : "Belum Kawin") << endl;
    cout << "Berlaku Hingga    : " << berlakuHingga << endl;
    cout << "=========================" << endl;

    return 0;
}
