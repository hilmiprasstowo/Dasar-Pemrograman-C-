#include <iostream>
using namespace std;

void helloWorld() {
	cout<<"Hello World"<<endl;
}

void greet(string nama){
	cout<<"Hello "<<nama<<" selamat datang di praktikum DDP "<<endl;
}

void cetakgaris(int n){ 
    for(int i=0;i<=n;i++){
    	cout<<"-";
    }
    cout<<endl;
}

int main(){
	helloWorld();
	greet("tamam");
	
	cetakgaris(18);
	greet("naya");
	cetakgaris(18);
}
