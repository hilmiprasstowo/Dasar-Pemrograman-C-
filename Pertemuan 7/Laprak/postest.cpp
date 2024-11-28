#include <iostream>
using namespace std;

int main() {
	
	int batas;
	
	cout<<"Masukan Batas : ";cin>>batas;
	cout<<endl;
	
	for(int i = 0; i < batas * 2 + 1; i++) cout<<"*"; cout<<endl;
	
	for(int i = 0; i < batas; i++){
		for(int j = batas; j > i; j--) cout<<"*";
		
		for(int j = 0; j < i+1; j++) {
			if(i == batas - 1 && j == batas - 1){
				cout<<"+";	
			}else{
				cout<<" ";
			}
		}
		
		for(int j = 0; j < i; j++) cout<<" ";
		
		for(int j = batas; j > i; j--) cout<<"*";
		
		cout<<endl;
	}
	
	for(int i = 1; i < batas; i++){
		
		for(int j = 0; j < i+1; j++) cout<<"*";
		
		for(int j = batas; j > i; j--) cout<<" ";
		
		for(int j = batas; j > i+1; j--) cout<<" ";
		
		for(int j = 0; j < i+1; j++) cout<<"*";
		
		cout<<endl;
	}
	
	for(int i = 0; i < batas * 2 + 1; i++) cout<<"*"; cout<<endl;
}
