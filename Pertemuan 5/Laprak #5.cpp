#include <iostream>
using namespace std;

int main (){
	
	int nilai;
	const int KKM = 75;
	
	cout << "Masukkan Nilai yang diinginkan: ";
	cin >> nilai;
	
	if (nilai >= KKM){
		cout << "Nilai masuk dalam kategori Lulus\n";
	
	}else{
		cout << "Nilai masuk dalam kategori Gagal\n";
	}
	
	return 0;
}
