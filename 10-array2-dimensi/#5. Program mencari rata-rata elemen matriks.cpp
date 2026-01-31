#include <iostream>
using namespace std;

int main(){
    int A[2][2], jumlah=0;

    cout << "=== RATA-RATA MATRIKS 2x2 ===\n";

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout << "Masukkan angka baris " << i+1 << " kolom " << j+1 << ": ";
            cin >> A[i][j];
            jumlah += A[i][j];
        }
    }

    float rata = jumlah / 4.0;

    cout << "\nNilai rata-rata elemen matriks adalah: " << rata;
}

