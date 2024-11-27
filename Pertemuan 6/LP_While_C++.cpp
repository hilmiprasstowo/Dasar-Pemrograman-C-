#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Masukkan angka untuk tabel perkalian: ";
    cin >> n;

    int i = 1; // Inisialisasi variabel untuk loop

    cout << "Tabel Perkalian " << n << ":\n";
    while (i <= 10) { // Loop untuk angka 1 hingga 10
        cout << n << " x " << i << " = " << n * i << endl; // Menampilkan hasil perkalian
        i++; // Menaikkan nilai i
    }

    return 0;
}
