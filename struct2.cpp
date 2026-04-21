#include <iostream>
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
    Mahasiswa mhs ;
    cout << "Masukkan NIM : ";
    cin >> mhs.nim ;
    cout << "Masukkan Nama : ";
    cin >> mhs.nama ;
    cout << "Alamat Mahasiswa : " << endl ;
    cout << " \t Masukkan Desa : ";
    cin >> mhs.alamat.desa ;
    cout << "Masukkan Kota : ";
    cin >> mhs.alamat.kota ;
    cout << "Masukkan Umur : ";
    cin >> mhs.umur ;

    cout << endl;
    cout << " \n NIM : " << mhs.nim << endl ;
    cout << "\n Nama : " << mhs.nama << endl ; 
    cout << "\n Alamat : " << endl ;
    cout << "\n Desa : " << mhs.alamat.desa << endl ;
    cout << "\n Kota : " << mhs.alamat.kota << endl ;
    cout << "\n Umur : " << mhs.umur << endl ;
}