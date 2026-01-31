#include<iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {          // loop baris
        for (int j = 1; j <= 10; j++) {      // loop kolom
            cout << i * j << "\t";           // cetak hasil perkalian
        }
        cout << endl;                        // pindah ke baris berikutnya
    }
    return 0;
}


