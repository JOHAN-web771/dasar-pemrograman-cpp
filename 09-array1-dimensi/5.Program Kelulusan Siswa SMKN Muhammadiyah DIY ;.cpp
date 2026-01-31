#include <iostream>
using namespace std;

int main() {
    string nama[3];
    int nilai[3];

    cout << "\n{ Program Kelulusan Siswa SMKN Muhammadiyah DIY }\n";

    // Input data
    for (int i = 0; i < 3; i++) {
        cout << "\nData Siswa ke-" << i + 1 << endl;
        cout << "Nama  : ";
        cin >> nama[i];
        cout << "Nilai : ";
        cin >> nilai[i];
    }

    // Output hasil
    cout << "\n=== HASIL KELULUSAN ===\n";
    for (int i = 0; i < 3; i++) {
        cout << nama[i] << " : ";
        if (nilai[i] >= 75) {
            cout << "LULUS\n";
        } else {
            cout << "TIDAK LULUS\n";
        }
    }

    return 0;
}

