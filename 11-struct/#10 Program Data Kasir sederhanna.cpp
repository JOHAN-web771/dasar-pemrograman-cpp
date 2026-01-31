#include <iostream>
#include <string>
using namespace std;

struct Produk {
    string namaBarang;
    int jumlah;
    int hargaSatuan;
    int total;
};

int main() {
    Produk q[2];

    cout << "\nProgram Kasir Barang Sederhana\n";
    cout << "---------------------------------\n";

    for (int i = 0; i < 2; i++) {
        cout << "\nData Barang ke-" << i + 1 << endl;

        cout << "Masukkan Nama Barang        : ";
        getline(cin, q[i].namaBarang);

        cout << "Masukkan Jumlah Barang      : ";
        cin >> q[i].jumlah;

        cout << "Harga Barang per unit (Rp)  : ";
        cin >> q[i].hargaSatuan;
        cin.ignore(); // bersihkan ENTER

        // Hitung total harga
        q[i].total = q[i].jumlah * q[i].hargaSatuan;
    }

    cout << "\n*** DATA BARANG YANG DIPESAN ***\n";
    for (int i = 0; i < 2; i++) {
        cout << "\nBarang ke-" << i + 1 << endl;
        cout << "Nama Barang   : " << q[i].namaBarang << endl;
        cout << "Jumlah        : " << q[i].jumlah << endl;
        cout << "Harga Satuan  : Rp " << q[i].hargaSatuan << endl;
        cout << "Total Harga   : Rp " << q[i].total << endl;
        cout << "------------------------------\n";
    }

    return 0;
}

