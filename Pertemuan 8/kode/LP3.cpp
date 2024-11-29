#include <iostream>
using namespace std;

int luasLingkaran(int r) {
	float phi = 3.14;
    return phi * r * r;
}

float kelilingLingkaran(int r) {
    float phi = 3.14;
    return 2 * phi * r;
}

void cetakgaris(int n) {
    for (int i = 0; i <= n; i++)
        cout << "-";
    cout << "\n";
}

int main() {
    float r;
    cout << "Masukan jari jari : ";
    cin>>r;
    
    cout << endl << "Luas lingkaran = " << luasLingkaran(r)<<endl;
    cetakgaris(20);
    cout << "Keliling Lingkaran = " << kelilingLingkaran(r)<<endl;
    return 0;
}

