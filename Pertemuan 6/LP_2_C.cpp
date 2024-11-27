#include <stdio.h>

int main() {
    int n, i = 1, jumlah = 0;

    printf("Masukkan sebuah angka: ");
    scanf("%d", &n);

    while (i <= n) {
        jumlah += i; // Menambahkan angka i ke jumlah
        i++; // Menaikkan nilai i
    }

    printf("Jumlah dari 1 sampai %d adalah: %d\n", n, jumlah);
    return 0;
}
