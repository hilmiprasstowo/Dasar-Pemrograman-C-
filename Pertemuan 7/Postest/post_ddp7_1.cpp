#include <iostream>
using namespace std;

int main()
{
	int baris, kolom;
	cout << "membuat perkalian\n";
	cout << "masukkan jumlah baris perkalian: ";
	cin >> baris;
	cout << "masukkan jumlah kolom perkalian: ";
	cin >> kolom;
	
	for(int i=1; i<=baris; i++)
	{
		for(int j=1; j<=kolom; j++)
		{
			cout << i*j<< " ";
		}
		cout << endl;
	}
	
}
