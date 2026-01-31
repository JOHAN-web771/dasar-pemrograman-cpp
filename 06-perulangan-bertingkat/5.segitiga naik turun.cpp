#include <iostream>
using namespace std;

int main() {
    // Segitiga naik
    for (int i = 1; i <= 4; i++) {
        int bintang = 2 * i - 1;
        for (int j = 1; j <= bintang; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Segitiga turun
    for (int i = 3; i >= 1; i--) {
        int bintang = 2 * i - 1;
        for (int j = 1; j <= bintang; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

