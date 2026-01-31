#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], C[2][2];

    cout << "{ Program Penjumlahan Matriks 2 x 2 (Dinamis) }\n";
    cout << "-----------------------------------------------\n";

    // Input matriks A
    cout << "Masukkan elemen Matriks A:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "] = ";
            cin >> A[i][j];
        }
    }

    // Input matriks B
    cout << "\nMasukkan elemen Matriks B:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "B[" << i+1 << "][" << j+1 << "] = ";
            cin >> B[i][j];
        }
    }

    // Proses penjumlahan
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Menampilkan hasil
    cout << "\nHasil Penjumlahan Matriks A + B:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

