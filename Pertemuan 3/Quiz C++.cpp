#include <iostream>
using namespace std;

int main() {
    // OPSI 1
    // Menjumlahkan Dua Bilangan Bulat
    //=====================================================================================================
    int a, b, hasil;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    hasil = a + b;

    cout << "Hasil penjumlahan: " << hasil << endl;

    // OPSI 2
    // Menghitung Luas Persegi Panjang
    //=====================================================================================================
    float panjang, lebar, luasPersegiPanjang;

    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;

    luasPersegiPanjang = panjang * lebar;

    cout << "Luas persegi panjang: " << luasPersegiPanjang << endl;

    // OPSI 3
    // Menghitung Luas Lingkaran
    //=====================================================================================================
    float jariJari, luasLingkaran;
    const float PI = 3.14159;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;

    luasLingkaran = PI * jariJari * jariJari;

    cout << "Luas lingkaran: " << luasLingkaran << endl;

    // OPSI 4
    // Konversi Celcius ke Fahrenheit
    //=====================================================================================================
    float celcius, fahrenheit;

    cout << "Masukkan suhu dalam Celcius: ";
    cin >> celcius;

    fahrenheit = (celcius * 9/5) + 32;

    cout << "Suhu dalam Fahrenheit: " << fahrenheit << endl;

    return 0;
}

