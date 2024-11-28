#include <iostream>
using namespace std;

int main ()
{
	int i, j,batas;
	cout<<"Masukan batas = ";cin>>batas;
	for(int i = batas ; i >= 1; i--)
	{
		for(int j = 1 ; j <= batas ; j++)
		{
			if (j>=i){
				cout<<j;
			}
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
