#include <stdio.h>

int main() {
    int n;

    printf("Masukkan angka untuk tabel perkalian: ");
    scanf("%d", &n);

    int i = 1; // Inisialisasi variabel untuk loop

    printf("Tabel Perkalian %d:\n", n);
    while (i <= 10) { // Loop untuk angka 1 hingga 10
        printf("%d x %d = %d\n", n, i, n * i); // Menampilkan hasil perkalian
        i++; // Menaikkan nilai i
    }

    return 0;
}
