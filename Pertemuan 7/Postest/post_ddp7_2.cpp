#include <iostream>
using namespace std;

int main()
{
	int batas;
	cout << "membuat ketupat\n";
	cout << "masukkan batas: ";
	cin >> batas;
	for(int i=1; i<=batas; i++)
	{
		for(int j=0; j<batas-i; j++)
		{
			cout << "  ";
		}
		for(int k=0; k<i*2; k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	
	for(int i=batas; i>=1; i--)
	{
		for(int j=batas; j>i; j--)
		{
			cout << "  ";
		}
		for(int k=i*2; k>0; k--)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
