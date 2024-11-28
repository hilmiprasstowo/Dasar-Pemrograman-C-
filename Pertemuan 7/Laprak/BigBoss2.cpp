#include <iostream>
using namespace std;

int main (){
	
	
	int batas;
	
	cout<<"Masukkan Batas Baris :";
	cin>> batas;
	
	for(int i=1; i<=batas;i++){
		
		for (int j=1; j<=batas;j++){
			if (j==i){
				cout <<j;
			}
			
			else{
				cout<<" ";
			}
		}
		
		for (int j=batas-1; j>=1;j--){
			if (j==i){
				cout <<j;
			}
			
			else{
				cout<<" ";
			}
		}

		cout <<endl;
	}
	
	
		for(int i=batas-1; i>=1;i--){
		
		for (int j=1; j<=batas;j++){
			if (j==i){
				cout <<j;
			}
			
			else{
				cout<<" ";
			}
		}
		
		for (int j=batas-1; j>=1;j--){
			if (j==i){
				cout <<j;
			}
			
			else{
				cout<<" ";
			}
		}

		cout <<endl;
	}
	

	
}
