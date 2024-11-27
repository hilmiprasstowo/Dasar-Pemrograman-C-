#include <iostream>
using namespace std;
int main() {
    int jumlahGenap = 0;

    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) { // Mengecek apakah angka genap
            jumlahGenap += i; // Menambahkan angka genap ke jumlah
        }
    }

    cout << "Jumlah angka genap dari 1 sampai 20 adalah: " << jumlahGenap << endl;
    return 0;
}
