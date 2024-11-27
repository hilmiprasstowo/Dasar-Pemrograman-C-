#include <stdio.h>

int main() {
    int angka;

    do {
        printf("Masukkan angka (0 untuk berhenti): ");
        scanf("%d", &angka);

        printf("Anda memasukkan angka: %d\n", angka);

    } while (angka != 0); // Terus meminta input selama angka tidak 0

    return 0;
}
