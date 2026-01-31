#include <iostream>
using namespace std;

struct Mahasiswa {
    char nama[20];
    char alamat[30];
    int nim;
};

int main() {
    Mahasiswa mhs[20];

    for (int i = 0; i < 2; i++) {
        cout << "\nData Mahasiswa ke-" << i+1 << endl;

        cout << "Masukkan nama   : ";
        cin >> mhs[i].nama;   // Pakai cin (tidak bisa spasi)

        cout << "Masukkan alamat : ";
        cin >> mhs[i].alamat; // Pakai cin (tidak bisa spasi)

        cout << "Masukkan NIM    : ";
        cin >> mhs[i].nim;
    }

    cout << "\n=== Data Mahasiswa ===\n";

    for (int i = 0; i < 2; i++) {
        cout << "\nMahasiswa ke-" << i+1 << endl;
        cout << "Nama   : " << mhs[i].nama << endl;
        cout << "Alamat : " << mhs[i].alamat << endl;
        cout << "NIM    : " << mhs[i].nim << endl;
    }

    return 0;
}

