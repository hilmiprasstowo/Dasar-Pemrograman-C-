#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Masukan Batasan: "; 
		cin>>n;  
	for(int i = 1 ; i <= n ; i++)				//Bagian atas
	{				
		for(int j=1 ; j <= n*2 ; j++)
		{
			if(j==i && j<n)
			{
		 		cout << i;
		 	}
		 	else if(j == (n*2+1) - i)
			{
		 		cout << i;
			}
				else{
					cout << " ";
			}
		}
		cout << endl;
	}
	
	for(int i = n-1 ; i >= 1 ; i--)				//Bagian Bawah
	{					
		for(int j = 1 ; j <= n*2 ; j++)
		{	
			if(j == i && j < n)
			{
	 			cout << i;
	 		}
			else if(j == (n*2+1) - i)
			{
	 			cout << i;
		 	}
			else
			{
	 			cout << " ";
			}
		}
		cout << endl;
	}
}	
