#include <stdio.h>

int main() {
    int angka;
    char pilihan;

    do {
        printf("Masukkan sebuah angka: ");
        scanf("%d", &angka);

        if (angka % 2 == 0) {
            printf("%d adalah angka genap.\n", angka);
        } else {
            printf("%d adalah angka ganjil.\n", angka);
        }

        printf("Apakah Anda ingin memasukkan angka lain? (y/n): ");
        scanf(" %c", &pilihan); // Tambahkan spasi sebelum %c untuk menangkap newline

    } while (pilihan == 'y' || pilihan == 'Y'); // Terus meminta input selama pengguna memilih 'y'

    printf("Terima kasih!\n");
    return 0;
}
