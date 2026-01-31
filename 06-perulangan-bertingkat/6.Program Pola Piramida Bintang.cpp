#include <iostream>
using namespace std;

int main() {
    int tinggi = 4;

    for (int i = 1; i <= tinggi; i++) {         // mencetak baris
        for (int j = 1; j <= tinggi - i; j++) { // mencetak spasi di kiri
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {  // mencetak bintang
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

	
	
