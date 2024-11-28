#include <iostream>
using namespace std;

int main()
{
	int batas;
	cout << "membuat segitiga terbalik\n";
	cout << "masukkan batas: ";
	cin >> batas;
	for(int i=batas; i>0; i--)
	{
		for(int j=batas; j>=i; j--)
		{
			cout << "  ";
		}
		for(int k=0; k<i*2; k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
