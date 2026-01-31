//4.angka yang pertama kali berulang

#include <iostream>
using namespace std;

int main() {
    int bilangan[ ] = {2, 5, 3, 5, 4, 7, 2, 8};
    int n = sizeof(bilangan) / sizeof(bilangan[0]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (bilangan[i] == bilangan[j]) {
                cout << "Angka yang pertama kali berulang adalah: " << bilangan[i] << endl;
                return 0;
            }
        }
    }

    cout << "Tidak ada angka yang berulang" << endl;
    return 0;
}
