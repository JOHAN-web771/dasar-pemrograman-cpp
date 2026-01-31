#include <iostream>
using namespace std;

int main(){
    int A[2][2], k;

    cout << "=== PROGRAM PERKALIAN MATRIKS 2x2 DENGAN KONSTANTA ===\n";

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout << "Masukkan angka baris " << i+1 << " kolom " << j+1 << ": ";
            cin >> A[i][j];
        }
    }

    cout << "\nMasukkan nilai pengali (konstanta): ";
    cin >> k;

    cout << "\nHasil setelah dikali " << k << " adalah:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout << A[i][j] * k << " ";
        }
        cout << endl;
    }
}

