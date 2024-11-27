#include <stdio.h>

int main() {
    int jumlahGenap = 0;

    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) { // Mengecek apakah angka genap
            jumlahGenap += i; // Menambahkan angka genap ke jumlah
        }
    }

    printf("Jumlah angka genap dari 1 sampai 20 adalah: %d\n", jumlahGenap);
    return 0;
}
