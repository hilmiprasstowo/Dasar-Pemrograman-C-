#include <iostream>
#include <string>
using namespace std;

int main() {
    // Deklarasi variabel
    string nik, nama, tempat_tgl_lahir, jenis_kelamin, alamat, rt_rw, kel_desa, kecamatan, agama, status_perkawinan, pekerjaan, kewarganegaraan, berlaku_hingga;
    char gol;

    // Input data KTP
    cout << "NIK \t\t\t\t : ";
    cin >> nik;
    cin.ignore(); // Mengabaikan karakter newline setelah cin

    cout << "Nama \t\t\t\t : ";
    getline(cin, nama);

    cout << "Tempat/Tanggal Lahir\t\t : ";
    getline(cin, tempat_tgl_lahir);

    cout << "Jenis Kelamin \t\t\t : ";
    getline(cin, jenis_kelamin);

    cout << "Golongan Darah\t\t\t : ";
    cin >> gol;
    cin.ignore();

    cout << "Alamat\t\t\t\t : ";
    getline(cin, alamat);

    cout << "RT/RW \t\t\t\t : ";
    getline(cin, rt_rw);

    cout << "Kel/Desa \t\t\t : ";
    getline(cin, kel_desa);

    cout << "Kecamatan \t\t\t : ";
    getline(cin, kecamatan);

    cout << "Agama \t\t\t\t : ";
    getline(cin, agama);

    cout << "Status Perkawinan\t\t : ";
    getline(cin, status_perkawinan);

    cout << "Pekerjaan \t\t\t : ";
    getline(cin, pekerjaan);

    cout << "Kewarganegaraan \t\t : ";
    getline(cin, kewarganegaraan);

    cout << "Berlaku Hingga \t\t\t : ";
    getline(cin, berlaku_hingga);

    // Output data KTP
    cout << "\n------------------------------------------------------------------------------------------------\n";
    cout << "NIK \t\t\t\t :" << nik << endl;
    cout << "Nama \t\t\t\t :" << nama << endl;
    cout << "Tempat/Tanggal Lahir \t\t :" << tempat_tgl_lahir << endl;
    cout << "Jenis Kelamin \t\t\t :" << jenis_kelamin << "\t\tGol. Darah :" << gol << endl;
    cout << "Alamat\t\t\t\t :" << alamat << endl;
    cout << "\tRT/RW \t\t\t :" << rt_rw << endl;
    cout << "\tKel/Desa \t\t :" << kel_desa << endl;
    cout << "\tKecamatan \t\t :" << kecamatan << endl;
    cout << "Agama \t\t\t\t :" << agama << endl;
    cout << "Status Perkawinan \t\t :" << status_perkawinan << endl;
    cout << "Pekerjaan \t\t\t :" << pekerjaan << endl;
    cout << "Kewarganegaraan \t\t :" << kewarganegaraan << endl;
    cout << "Berlaku Hingga \t\t\t :" << berlaku_hingga << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    return 0;
}

