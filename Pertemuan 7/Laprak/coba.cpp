#include <iostream>
using namespace std;

int main ()
{
	int i, j,a;
	// mulai batas
	
	cout<<"Masukan batas = ";cin>>a;
	for(int i = a ; i >= 1; i--)
	{
		for(int j = 1 ; j <= i ; j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
