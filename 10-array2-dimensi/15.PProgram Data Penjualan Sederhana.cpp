#include <iostream>
using namespace std;

int main() {
    int penjualan[10][3];
    int toko;

    cout << "Masukkan jumlah toko: ";
    cin >> toko;

    for(int i = 0; i < toko; i++) {
        cout << "\nToko ke-" << i+1 << endl;
        cout << "Januari  : ";
        cin >> penjualan[i][0];
        cout << "Februari : ";
        cin >> penjualan[i][1];
        cout << "Maret    : ";
        cin >> penjualan[i][2];
    }

    cout << "\n===== ANALISIS PENJUALAN =====\n";
    for(int i = 0; i < toko; i++) {
        int total = 0;
        int max = penjualan[i][0];

        for(int j = 0; j < 3; j++) {
            total += penjualan[i][j];
            if(penjualan[i][j] > max)
                max = penjualan[i][j];
        }

        double rata = total / 3.0;

        cout << "Toko ke-" << i+1 << endl;
        cout << "Total      = " << total << endl;
        cout << "Rata-rata  = " << rata << endl;
        cout << "Tertinggi  = " << max << endl;
        cout << "----------------------\n";
    }

    return 0;
}

