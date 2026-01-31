#include <iostream>
using namespace std;

int main() {
    int bilangan[5];

    cout << "\n** Program Penentuan Bilangan Prima **\n";

    // Input array
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan bilangan ke-" << i + 1 << ": ";
        cin >> bilangan[i];
    }

    // Proses & Output
    cout << "\nHasil pengecekan:\n";
    for (int i = 0; i < 5; i++) {
        bool prima = true;

        if (bilangan[i] <= 1) {
            prima = false;
        } else {
            for (int j = 2; j * j <= bilangan[i]; j++) {
                if (bilangan[i] % j == 0) {
                    prima = false;
                    break;
                }
            }
        }

        if (prima) {
            cout << bilangan[i] << " adalah Bilangan PRIMA\n";
        } else {
            cout << bilangan[i] << " adalah BUKAN Bilangan Prima\n";
        }
    }

    return 0;
}

