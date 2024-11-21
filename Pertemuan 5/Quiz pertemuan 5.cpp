#include <iostream>
using namespace std;

int main (){
	float angka1, angka2, hasil;
	char pilihan;
	
	cout << "===Kalkulator Sederhana==="<<endl;
	cout << "(+) Pertambahan: "<<endl;
	cout << "(-) Pengurangan: "<<endl;
	cout << "(x) Perkalian: "<<endl;
	cout << "(/) Pembagian: "<<endl;
	cout << "Masukkan Pilihan: ";
	cin >> pilihan;
	
	switch(pilihan){
		case '+':
			cout << "\nMasukkan angka pertama: ";
			cin >> angka1;
			cout << "Masukkan angka kedua: ";
			cin >> angka2;
			
			hasil = angka1 + angka2;
			cout << "Hasilnya: "<< hasil;
			break;	
		case '-':
			cout << "\nMasukkan angka pertama: ";
			cin >> angka1;
			cout << "Masukkan angka kedua: ";
			cin >> angka2;
			
			hasil = angka1 - angka2;
			cout << "Hasilnya: "<< hasil;
			break;	
		case 'x':
			cout << "\nMasukkan angka pertama: ";
			cin >> angka1;
			cout << "Masukkan angka kedua: ";
			cin >> angka2;
			
			hasil = angka1 * angka2;
			cout << "Hasilnya: "<< hasil;
			break;
		case '/':
			cout << "\nMasukkan angka pertama: ";
			cin >> angka1;
			cout << "Masukkan angka kedua: ";
			cin >> angka2;
			
			hasil = angka1 / angka2;
			cout << "Hasilnya: "<< hasil;
			break;		
		default:
			cout << "Pilihan tidak ada!";
	}
	return 0;
}
