#include <iostream>
using namespace std;

int main() {
    int tinggi = 5;   // jumlah baris (maksimal 26 untuk A-Z)

    for (int i = 0; i < tinggi; i++) {          // loop baris
        for (int j = 0; j <= i; j++) {           // loop kolom
            cout << char('A' + j);
        }
        cout << endl;
    }

    return 0;
}

