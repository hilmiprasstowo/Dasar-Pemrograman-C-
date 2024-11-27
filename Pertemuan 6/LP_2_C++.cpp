#include <iostream>

using namespace std;

int main() {
    int n, i = 1, jumlah = 0;

    cout << "Masukkan sebuah angka: ";
    cin >> n;

    while (i <= n) {
        jumlah += i; // Menambahkan angka i ke jumlah
        i++; // Menaikkan nilai i
    }

    cout << "Jumlah dari 1 sampai " << n << " adalah: " << jumlah << endl;
    return 0;
}
