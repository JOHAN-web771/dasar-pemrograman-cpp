#include <iostream>
using namespace std;

int main() {
    int bilangan[5];

    cout << "\n** Program Penentuan Bilangan Genap atau Ganjil **\n";

    // Input array
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan bilangan ke-" << i + 1 << ": ";
        cin >> bilangan[i];
    }

    // Output hasil
    cout << "\nHasil pengecekan:\n";
    for (int i = 0; i < 5; i++) {
        if (bilangan[i] % 2 == 0) {
            cout << bilangan[i] << " adalah Bilangan Genap\n";
        } else {
            cout << bilangan[i] << " adalah Bilangan Ganjil\n";
        }
    }

    return 0;
}

