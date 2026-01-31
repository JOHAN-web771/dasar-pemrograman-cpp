#include <iostream>
#include <string>
using namespace std;

// Struct untuk data barang
struct Barang {
    string nama;
    int jumlah;
    int harga;
    int total;
};

int main() {
    int n;
    int grandTotal = 0;

    cout << "===== PROGRAM KASIR SEDERHANA =====" << endl;
    cout << "Masukkan jumlah barang: ";
    cin >> n;

    Barang barang[n];

    // Input data barang
    for (int i = 0; i < n; i++) {
        cout << "\nBarang ke-" << i + 1 << endl;
        cout << "Nama barang  : ";
        cin >> barang[i].nama;
        cout << "Jumlah       : ";
        cin >> barang[i].jumlah;
        cout << "Harga satuan : ";
        cin >> barang[i].harga;

        barang[i].total = barang[i].jumlah * barang[i].harga;
        grandTotal += barang[i].total;
    }

    // Tampilkan struk
    cout << "\n===== STRUK BELANJA =====" << endl;
    cout << "No  Nama   Jumlah  Harga  Total" << endl;

    for (int i = 0; i < n; i++) {
        cout << i + 1 << "   "
             << barang[i].nama << "     "
             << barang[i].jumlah << "       "
             << barang[i].harga << "    "
             << barang[i].total << endl;
    }

    cout << "----------------------------" << endl;
    cout << "Total Bayar: Rp " << grandTotal << endl;

    return 0;
}
