#include <iostream>
using namespace std;

int main()
{
	int batas;
	cout << "membuat segitiga angka\n";
	cout << "masukkan batas: ";
	cin >> batas;
	for(int i=0; i<=batas; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	
	for(int i=batas; i>0; i--)
	{
		for(int j=0; j<i; j++)
		{
			cout << j <<" ";
		}
		cout << endl;
	}
}
