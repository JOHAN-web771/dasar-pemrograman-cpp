#include <iostream>
using namespace std;

int main() {
    float A[2][2], inv[2][2];
    float det;

    cout << "=== PROGRAM INVERS MATRIKS 2x2 ===\n\n";

    // Input matriks
    cout << "Masukkan elemen matriks:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "]: ";
            cin >> A[i][j];
        }
    }

    // Hitung determinan
    det = A[0][0]*A[1][1] - A[0][1]*A[1][0];

    if(det == 0) {
        cout << "\nMatriks tidak memiliki invers (determinan = 0)\n";
        return 0;
    }
}

