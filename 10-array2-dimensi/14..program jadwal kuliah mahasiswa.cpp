#include <iostream>
#include <string>
using namespace std;

int main() {
    string jadwal[10][10];
    int hari, jam;

    cout << "Masukkan jumlah hari: ";
    cin >> hari;
    cout << "Masukkan jumlah jam per hari: ";
    cin >> jam;
    cin.ignore();

    cout << "\nMasukkan jadwal:\n";
    for(int i = 0; i < hari; i++) {
        for(int j = 0; j < jam; j++) {
            cout << "Hari ke-" << i+1 << " Jam ke-" << j+1 << ": ";
            getline(cin, jadwal[i][j]);
        }
    }

    cout << "\n===== JADWAL =====\n";
    for(int i = 0; i < hari; i++) {
        for(int j = 0; j < jam; j++) {
            cout << jadwal[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

