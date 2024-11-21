#include <iostream>
using namespace std;

int main (){
	
	int pilihan;
	
	cout << "Dibawah ini manakah menu favorit anda? (1-4)\n";
	cout << "1.Ayam Goreng Lalapan\n";
	cout << "2.Nasi Goreng\n";
	cout << "3.Sate Ayam\n";
	cout << "4.Soto Betawi\n";
	cout << "Masukkan Pilihan anda: ";
	cin >> pilihan; 
	
	switch (pilihan){
		case 1:
			cout << "\nanda memilih pilihan 1:\n";
			cout << "Ayam Goreng Lalapan";
			break;
		case 2:
			cout << "\nanda memilih pilihan 2:\n"; 
			cout << "Nasi Goreng";
			break;
		case 3:
			cout << "\nanda memilih pilihan 3:\n";
			cout << "Sate Ayam";
			break;
		case 4:
			cout << "\nanda memilih pilihan 4:\n";
			cout << "Soto Betawi";
			break;
		default:
			cout << "Pilihan yang anda pilih tidak ada di menu!";
	}
}
