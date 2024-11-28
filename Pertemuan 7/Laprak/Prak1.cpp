#include <iostream>
using namespace std;

int main() {
	for(int i = 5; i > 0; i--){
		for(int j = 0; j < i-1; j++){
			cout<<" ";
		}
		for(int k = i; k <= 5; k++){
			cout<<k;
		}
		cout<<endl;
	}
}
