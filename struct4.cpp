#include <iostream>
#include <string>

using namespace std;

struct DetailAlamat {
    string desa ;
    string kota ;
};

struct Mahasiswa
{
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main () {
    Mahasiswa mhs [3] ;
    for (int i = 0; i < 3; i++) {
        cout << "Data Mahasiswa ke-" << (i + 1) << ":" << endl ;
        cout << "Masukkan NIM : ";
        getline(cin, mhs[i].nim) ;
        cout << "Masukkan Nama : ";
        getline(cin, mhs[i].nama) ;
        cout << "Alamat Mahasiswa : " << endl ;
        cout << " \t Masukkan Desa : ";
        cin >> mhs[i].alamat.desa ;
        cout << "\t Masukkan Kota : ";
        cin >> mhs[i].alamat.kota ;
        cout << "Masukkan Umur : ";
        cin >> mhs[i].umur ;
        cin.ignore() ; 
    }
 for (int i = 0; i < 3; i++) {
        cout << "\nData Mahasiswa ke-" << (i + 1) << ":" << endl ;
        cout << "\n NIM : " << mhs[i].nim << endl ;
        cout << "\n Nama : " << mhs[i].nama << endl ; 
        cout << "\n Alamat : " ;
        cout << "\n Desa : " << mhs[i].alamat.desa << endl ;
        cout << "\n Kota : " << mhs[i].alamat.kota << endl ;
        cout << "\n Umur : " << mhs[i].umur << endl ;
    }

    return 0;

}