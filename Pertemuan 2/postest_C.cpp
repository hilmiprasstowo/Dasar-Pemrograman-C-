#include <stdio.h>

int main() {
    // Variabel dengan tipe data beragam
    char nama[] = "Ahmad Budi Santoso";
    int tanggalLahir = 1;
    int tahunLahir = 1990;
    char jenisKelamin = 'L'; // 'L' untuk Laki-laki, 'P' untuk Perempuan
    int statusPernikahan = 0; // 0 = Belum Kawin, 1 = Kawin
    char berlakuHingga[] = "Seumur Hidup"; // Tipe data string
    
    // Output sederhana
    printf("========== KTP ==========\n");
    printf("Nama              : %s\n", nama);
    printf("Tanggal Lahir     : %d-01-%d\n", tanggalLahir, tahunLahir);
    printf("Jenis Kelamin     : %s\n", (jenisKelamin == 'L') ? "Laki-laki" : "Perempuan");
    printf("Status Perkawinan : %s\n", (statusPernikahan == 1) ? "Kawin" : "Belum Kawin");
    printf("Berlaku Hingga    : %s\n", berlakuHingga);
    printf("=========================\n");

    return 0;
}
