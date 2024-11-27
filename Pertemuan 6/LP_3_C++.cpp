#include <iostream>

using namespace std;

int main() {
    int angka;

    do {
        cout << "Masukkan angka (0 untuk berhenti): ";
        cin >> angka;

        cout << "Anda memasukkan angka: " << angka << endl;

    } while (angka != 0); // Terus meminta input selama angka tidak 0

    return 0;
}
