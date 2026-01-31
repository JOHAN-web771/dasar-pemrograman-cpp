#include <iostream>
using namespace std;

struct Mahasiswa {
    char nama [20];
    char alamat [30];
    int nim;
};



int main() {
    Mahasiswa mhs;

    cout << "Masukkan nama: ";
    cin >> mhs.nama;

    cout << "Masukkan alamat: ";
    cin>>gets (mhs.alamat);

    cout << "Masukkan NIM: ";
    cin >> mhs.nim;

    cout << "\n=== Data Mahasiswa ===" << endl;
    cout << "Nama 	: " << mhs.nama << endl;
    cout << "alamat  : " << mhs.alamat << endl;
    cout << "NIM  	: " << mhs.nim << endl;

    return 0;
}

