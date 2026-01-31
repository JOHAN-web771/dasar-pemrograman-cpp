#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 4; i++) {      // jumlah baris
        int bintang = 2 * i;           // kelipatan 2

        for(int j = 1; j <= bintang; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

