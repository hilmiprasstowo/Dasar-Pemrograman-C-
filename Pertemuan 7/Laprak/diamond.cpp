#include <iostream>
using namespace std;

int main(){
	
	int batas;
	cout<<"Masukkan batas : ";
	cin>>batas;
	int k;
	for(int i=1; i<=batas; i++){
		for(int j=batas; j>=i; j--){
			cout<<" ";
		}
		for(k=1; k<=i; k++){
			cout<<k;
		}
		k--;
		for(int l=1; l<=i-1;l++){
			k--;
			cout<<k;
		}
		cout<<endl;
	}
	
	for(int i=batas; i>=1; i++){
		for(int j=batas; j>=i; j--){
			cout<<" ";
		}
		for(k=1; k<=i; k++){
			cout<<k;
		}
		k--;
		for(int l=1; l<=i-1;l++){
			k--;
			cout<<k;
		}
		cout<<endl;
	}
	return 0;
}
