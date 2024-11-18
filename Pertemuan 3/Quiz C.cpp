#include <stdio.h>

int main() {
//    int a, b, hasil;
//	OPSI 1
//	Menjumlahkan Dua Bilangan Bulat
//=====================================================================================================
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);

    hasil = a + b;

    printf("Hasil penjumlahan: %d\n", hasil);


//	OPSI 2
//	Menghitung Luas Persegi Panjang
//=====================================================================================================
 float panjang, lebar, luas;

    printf("Masukkan panjang: ");
    scanf("%f", &panjang);
    printf("Masukkan lebar: ");
    scanf("%f", &lebar);

    luas = panjang * lebar;

    printf("Luas persegi panjang: %.2f\n", luas);
//	OPSI 3
//	Menghitung Luas Persegi Panjang
//=====================================================================================================
float jariJari, luas;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);
	float PI = 3.14159
    luas = PI * jariJari * jariJari;

    printf("Luas lingkaran: %.2f\n", luas);
//	OPSI 4
//	Konversi Celcius ke Fahrenheit
//=====================================================================================================
float celcius, fahrenheit;

    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9/5) + 32;

    printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);
    return 0;

}

