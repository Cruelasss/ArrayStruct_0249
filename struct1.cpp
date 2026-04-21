#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nim;
    string nama;
    string alamat;
    int umur;
};

int main () {
    Mahasiswa mhs ;
    cout << "Masukkan NIM : ";
    cin >> mhs.nim ;
    cout << "Masukkan Nama : ";
    cin >> mhs.nama ;
    cout << "Masukkan Alamat : ";
    cin >> mhs.alamat ;
    cout << "Masukkan Umur : ";
    cin >> mhs.umur ;

    cout << endl;
    cout << " \n NIM : " << mhs.nim << endl ;
    cout << "\n Nama : " << mhs.nama << endl ; 
    cout << "\n Alamat : " << mhs.alamat << endl ;
    cout << "\n Umur : " << mhs.umur << endl ;
}