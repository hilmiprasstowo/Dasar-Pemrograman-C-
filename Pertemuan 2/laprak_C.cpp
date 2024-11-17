#include <stdio.h>
#include <string.h>  // Library untuk menggunakan tipe data string

int main() {
    // Deklarasi variabel
    int angka;               // Tipe data int
    float pecahanKecil;       // Tipe data float
    double pecahanBesar;      // Tipe data double
    long angkaBesar;          // Tipe data long
    char karakter;            // Tipe data char
    char kalimat[50];         // Tipe data string (array of char)

    // Memberi nilai pada variabel
    angka = 10;
    pecahanKecil = 5.5;
    pecahanBesar = 1234567.891234;
    angkaBesar = 1234567890;
    karakter = 'A';
    strcpy(kalimat, "Belajar tipe data di C");

    // Menampilkan nilai variabel
    printf("Nilai int: %d\n", angka);
    printf("Nilai float: %.2f\n", pecahanKecil);
    printf("Nilai double: %.6lf\n", pecahanBesar);
    printf("Nilai long: %ld\n", angkaBesar);
    printf("Nilai char: %c\n", karakter);
    printf("Nilai string: %s\n", kalimat);

    return 0;
}
