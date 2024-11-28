#include <iostream>
using namespace std;

int main()
{
	int batas;
	cout << "membuat panah\n";
	cout << "masukkan batas: ";
	cin >> batas;
	for(int i=0; i<batas; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout << " ";
		}
		for(int k=0; k<=i; k++)
		{
			cout <<"> ";
		}
		cout << endl;
	}
	
	for(int i=batas-1; i>0; i--)
	{
		for(int j=0; j<=i; j++)
		{
			cout << " ";
		}
		for(int k=0; k<i; k++)
		{
			cout << "> ";
		}
		cout << endl;
	}
}
