#include <iostream>
using namespace std;

int main (){
	
	
	int batas;
	
	cout<<"Masukkan Batas Baris :";
	cin>> batas;
	
	//atas
	for(int i=1; i<=batas;i++){
		
		for (int j=batas; j>=1;j--){
			if (j==i){
				cout <<j;
			}
			
			else{
				cout<<"-";
			}
		}
		cout << " ";
		for (int j=2; j<=batas;j++){
			if (j==i){
				cout <<j;
			}
			
			else{
				cout<<"+";
			}
		}

		cout <<endl;
	}
	
//	// bawah
//	
//		for(int i=batas-1; i>=1;i--){
//		
//		for (int j=batas; j>=1;j--){
//			if (j==i){
//				cout <<j;
//			}
//			
//			else{
//				cout<<" ";
//			}
//		}
//		
//		for (int j=2; j<=batas;j++){
//			if (j==i){
//				cout <<j;
//			}
//			
//			else{
//				cout<<" ";
//			}
//		}
//
//		cout <<endl;
//	}
}
