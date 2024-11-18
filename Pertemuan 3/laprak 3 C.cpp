#include <stdio.h>

int main() {
    int iniInteger;
    float iniFloat;
    char iniChar;
    char iniString[100]; // untuk nyimpen string

    // Input dan output integer
    printf("Masukkan bilangan bulat (int): ");
    scanf("%d", &iniInteger);
    printf("Anda memasukkan: %d\n", iniInteger);

    // Input dan output float
    printf("Masukkan bilangan desimal (float): ");
    scanf("%f", &iniFloat);
    printf("Anda memasukkan: %.2f\n", iniFloat);

    // Input dan output char
    printf("Masukkan karakter (char): ");
    scanf(" %c", &iniChar); // tambahin spasi sebelum %c buat newline
    printf("Anda memasukkan: %c\n", iniChar);

    // Input dan output string
    printf("Masukkan string (tanpa spasi): ");
    scanf("%s", iniString);
    printf("Anda memasukkan: %s\n", iniString);

    return 0;
}

