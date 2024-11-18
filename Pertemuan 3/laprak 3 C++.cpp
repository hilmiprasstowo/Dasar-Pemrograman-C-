#include <iostream>

using namespace std;

int main() {
    int iniInteger;
    float iniFloat;
    char iniChar;
    string iniString;

    // Input dan output integer
    cout << "Masukkan bilangan bulat (int): ";
    cin >> iniInteger;
    cout << "Anda memasukkan: " << iniInteger << endl;

    // Input dan output float
    cout << "Masukkan bilangan desimal (float): ";
    cin >> iniFloat;
    cout << "Anda memasukkan: " << iniFloat << endl;

    // Input dan output char
    cout << "Masukkan karakter (char): ";
    cin >> iniChar;
    cout << "Anda memasukkan: " << iniChar << endl;

    // Input dan output string
    cout << "Masukkan string: ";
    cin >> iniString;
    cout << "Anda memasukkan: " << iniString << endl;

    return 0;
}
