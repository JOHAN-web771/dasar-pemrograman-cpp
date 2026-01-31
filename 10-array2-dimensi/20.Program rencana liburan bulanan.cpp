#include <iostream>
#include <string>
using namespace std;

int main() {
    string liburan[5][10];   // Maksimal 5 minggu, 10 kegiatan
    int minggu, kegiatan;

    cout << "===== PROGRAM RENCANA LIBURAN BULANAN =====\n";
    cout << "Masukkan jumlah minggu dalam bulan: ";
    cin >> minggu;

    cout << "Masukkan jumlah kegiatan liburan per minggu: ";
    cin >> kegiatan;
    cin.ignore(); // membersihkan buffer input

    // Input rencana liburan
    for(int i = 0; i < minggu; i++) {
        cout << "\nMinggu ke-" << i+1 << endl;
        for(int j = 0; j < kegiatan; j++) {
            cout << "Rencana ke-" << j+1 << ": ";
            getline(cin, liburan[i][j]);
        }
    }

    // Output rencana liburan
    cout << "\n===== JADWAL RENCANA LIBURAN =====\n";
    for(int i = 0; i < minggu; i++) {
        cout << "Minggu ke-" << i+1 << ":\n";
        for(int j = 0; j < kegiatan; j++) {
            cout << "- " << liburan[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}

