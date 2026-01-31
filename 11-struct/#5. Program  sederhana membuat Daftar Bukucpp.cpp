#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Buku {
    string judulBuku;
    string pengarang;
    string tahunTerbit;
};

int main() {
    int jumlah;
    char lanjut;

    do {
        cout << "\n** Program Membuat Daftar Buku Sederhana **\n";
        cout << "Masukkan Jumlah Buku: ";
        cin >> jumlah;
        cin.ignore(); // membersihkan ENTER

        vector<Buku> buku(jumlah);

        // Input data buku
        for (int i = 0; i < jumlah; i++) {
            cout << "\nData Buku ke-" << i + 1 << endl;

            cout << "Judul Buku   : ";
            getline(cin, buku[i].judulBuku);

            cout << "Pengarang    : ";
            getline(cin, buku[i].pengarang);

            cout << "Tahun Terbit : ";
            getline(cin, buku[i].tahunTerbit);
        }

        // Output data buku
        cout << "\n--- DAFTAR BUKU ---\n";
        for (int i = 0; i < jumlah; i++) {
            cout << "\nBuku ke-" << i + 1 << endl;
            cout << "Judul Buku   : " << buku[i].judulBuku << endl;
            cout << "Pengarang    : " << buku[i].pengarang << endl;
            cout << "Tahun Terbit : " << buku[i].tahunTerbit << endl;
            cout << "---------------------------\n";
        }

        cout << "Mau input ulang? (y/n): ";
        cin >> lanjut;
        cin.ignore();

    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}

