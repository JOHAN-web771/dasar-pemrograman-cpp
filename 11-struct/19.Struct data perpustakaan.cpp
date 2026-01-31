#include <iostream>
using namespace std;

struct Perpustakaan {
    string namaAnggota;
    int jumlahBuku;
};

int main() {
    Perpustakaan p;

    cout << "Nama Anggota : ";
    cin >> p.namaAnggota;
    cout << "Jumlah Buku  : ";
    cin >> p.jumlahBuku;

    cout << "\n" << p.namaAnggota 
         << " meminjam " << p.jumlahBuku 
         << " buku";
    return 0;
}

