#include <iostream>
#include <string>
using namespace std;

int main() {
    string todo[7][10];   // Maksimal 7 hari, 10 kegiatan
    int hari, kegiatan;

    cout << "===== PROGRAM TO-DO LIST HARIAN =====\n";
    cout << "Masukkan jumlah hari: ";
    cin >> hari;

    cout << "Masukkan jumlah kegiatan per hari: ";
    cin >> kegiatan;
    cin.ignore(); // membersihkan buffer

    // Input kegiatan
    for(int i = 0; i < hari; i++) {
        cout << "\nHari ke-" << i+1 << endl;
        for(int j = 0; j < kegiatan; j++) {
            cout << "Kegiatan ke-" << j+1 << ": ";
            getline(cin, todo[i][j]);
        }
    }

    // Output To-Do List
    cout << "\n===== TO-DO LIST HARIAN =====\n";
    for(int i = 0; i < hari; i++) {
        cout << "Hari ke-" << i+1 << ":\n";
        for(int j = 0; j < kegiatan; j++) {
            cout << "- " << todo[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}

