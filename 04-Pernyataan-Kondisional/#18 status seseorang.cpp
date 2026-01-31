#include <iostream>
using namespace std;

int main() {
    int bulan;

    cout << "=== Program Penentuan Musim di Indonesia ===\n";
    cout << "Masukkan bulan (1 - 12): ";
    cin >> bulan;

    if (bulan >= 1 && bulan <= 12) {
        if (bulan >= 10 || bulan <= 3) {
            cout << "Musim Hujan";
        } else {
            cout << "Musim Kemarau";
        }
    } else {
        cout << "Bulan tidak valid!";
    }

    return 0;
}

