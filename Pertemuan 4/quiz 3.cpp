#include<iostream> 
#define PI 3.14
using namespace std;

int main() 
  {    
    float jariJari, luasLingkaran;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;

    luasLingkaran = PI * jariJari * jariJari;

    cout << "Luas lingkaran: " << luasLingkaran << endl;
 
}