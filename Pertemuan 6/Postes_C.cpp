#include <stdio.h>

int main() {
    int angka;
    char pilihan;

    do {
        printf("Masukkan angka positif untuk menghitung faktorial: ");
        scanf("%d", &angka);

        // Memeriksa apakah angka positif
        if (angka < 0) {
            printf("Faktorial tidak terdefinisi untuk angka negatif.\n");
        } else {
            // Menghitung faktorial
            long long faktorial = 1;
            for (int i = 1; i <= angka; i++) {
                faktorial *= i; // Mengalikan angka ke faktorial
            }
            printf("Faktorial dari %d adalah: %lld\n", angka, faktorial);
        }

        printf("Apakah Anda ingin menghitung faktorial dari angka lain? (y/n): ");
        scanf(" %c", &pilihan); // Spasi sebelum %c untuk menangkap newline

    } while (pilihan == 'y' || pilihan == 'Y'); // Terus meminta input jika pengguna memilih 'y'

    printf("Terima kasih telah menggunakan program ini!\n");
    return 0;
}
