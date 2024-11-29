#include <iostream>
using namespace std;

int tambah (int angka1, int angka2){
	return angka1+angka2; 
	
}

int kurang (int angka1, int angka2){
	return angka1-angka2;
}

int main (){
	int angka1, angka2;
	cout << "Masukkan Bilangan pertama: ";
	cin>>angka1; 
	cout << "Masukkan Bilangan kedua: ";
	cin>>angka2;
	
	
	cout<<"Hasil penjumlahan "<<angka1<<" dan "<<angka2 <<" = " <<tambah(angka1, angka2)<<endl;
	cout<<"Hasil pengurangan "<<angka1<<" dan "<<angka2 <<" = " <<kurang(angka1, angka2)<<endl;
	
	 
}

