#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	int a, b, c, d;
	system("color 09");
	for (a=1; a<=5; a++){
		for(b=5; b>a; b--){
		cout<<" ";
		}
		for(c=1; c<=a; c++){
		cout<<c;
		}
		for(d=a-1; d>=1; d--){
		cout<<d;
		}		
		cout<<endl;
	}
	for (a=4; a>=1; a--){
		for(b=5; b>a; b--){
		cout<<" ";	
		}
		for(c=1; c<=a; c++){
		cout<<c;
		}
		for(d=a-1; d>=1; d--){
		cout<<d;
		}
		cout<<endl;
	}
}
