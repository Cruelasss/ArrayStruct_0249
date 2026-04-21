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
}