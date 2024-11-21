#include <iostream>
using namespace std;

int main (){
	
	int nilai;
	
	cout << "Masukkan Nilai yang diinginkan: ";
	cin >> nilai;
	
	if (nilai >= 90 ){
		cout << "Nilai: "<< nilai << " masuk dalam Grade A";
	}else if (nilai >= 80){
		cout << "Nilai: "<< nilai << " masuk dalam Grade B";
	}else if (nilai >= 70){
		cout << "Nilai: "<< nilai << " masuk dalam Grade  C";
	}else if (nilai >= 60){
		cout << "Nilai: "<< nilai << " masuk dalam Grade D";
	}else{
		cout << "Nilai: "<< nilai << " masuk dalam Grade E";
	}
	
	return 0;
}
