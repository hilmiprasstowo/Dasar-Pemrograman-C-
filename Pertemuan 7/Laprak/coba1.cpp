#include <iostream>
using namespace std;

int main(){
	int i,j, baris;
	cout<<"Masukkan jumlah baris : ";
	cin>>baris;
	
	for(i=1; i<=baris; i++){
		for(j=i; j<=baris; j++){
			cout<<" ";
		}
		for(int k=i; j<=baris; j++){
			cout<<k;
		}
		cout<<endl;
	}
}
