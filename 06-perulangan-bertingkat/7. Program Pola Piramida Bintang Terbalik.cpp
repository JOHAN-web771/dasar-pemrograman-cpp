#include <iostream>
using namespace std;

int main() {

    for(int i = 3; i >= 1; --i){          // mencetak baris dari 3 ke 1
        for(int j = 1; j <= 3 - i; j++){  // mencetak spasi
            cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; ++k){ // mencetak bintang
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

	
