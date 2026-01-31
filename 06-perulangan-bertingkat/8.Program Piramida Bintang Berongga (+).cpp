#include <iostream>
using namespace std;

int main() {
    int n = 4; // jumlah baris

    for (int i = 0; i < n; i++) {

        // cetak spasi supaya rata tengah
        for (int s = 0; s < n - 1 - i; s++) {
            cout << " ";
        }

        // cetak bintang pertama
        cout << "*";

        // cetak tanda +
        for (int j = 0; j < (2 * i - 1); j++) {
            cout << "+";
        }

        // cetak bintang terakhir jika baris > 0
        if (i > 0) cout << "*";

        cout << endl;
    }

    return 0;
}

