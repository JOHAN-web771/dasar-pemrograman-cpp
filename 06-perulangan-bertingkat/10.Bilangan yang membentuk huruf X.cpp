#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int size = 2 * n - 1;   // total baris & kolom = 9

    for (int i = 1; i <= size; i++) {

        // tentukan angka yang dicetak di baris ini
        int val = (i <= n) ? i : (2 * n - i);

        for (int j = 1; j <= size; j++) {

            // posisi diagonal kiri-kanan
            if (j == i || j == size - i + 1)
                cout << val;
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

