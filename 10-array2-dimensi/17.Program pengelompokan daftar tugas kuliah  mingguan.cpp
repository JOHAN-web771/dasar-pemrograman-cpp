#include <iostream>
#include <string>
using namespace std;

int main() {
    string tugas[10][10];   // Maksimal 10 minggu, 10 tugas
    int minggu, jumlahTugas;

    cout << "===== PROGRAM PENGELOMPOKAN TUGAS KULIAH =====\n";
    cout << "Masukkan jumlah minggu: ";
    cin >> minggu;

    cout << "Masukkan jumlah tugas per minggu: ";
    cin >> jumlahTugas;
    cin.ignore(); // membersihkan buffer input

    // Input tugas
    for(int i = 0; i < minggu; i++) {
        cout << "\nMinggu ke-" << i+1 << endl;
        for(int j = 0; j < jumlahTugas; j++) {
            cout << "Tugas ke-" << j+1 << ": ";
            getline(cin, tugas[i][j]);
        }
    }

    // Output daftar tugas
    cout << "\n===== DAFTAR TUGAS KULIAH MINGGUAN =====\n";
    for(int i = 0; i < minggu; i++) {
        cout << "Minggu ke-" << i+1 << ":\n";
        for(int j = 0; j < jumlahTugas; j++) {
            cout << "- " << tugas[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}

