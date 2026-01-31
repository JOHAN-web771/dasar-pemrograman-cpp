#include <iostream>
using namespace std;

int main(){
    int A[2][2];
    cout << "=== Mencari Nilai Maksimum Dakam Matriks 2x2 ===\n";

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout << "Masukkan nilai baris " << i+1 << " kolom " << j+1 << ": ";
            cin >> A[i][j];
        }
    }

    int maks = A[0][0];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(A[i][j] > maks)
                maks = A[i][j];
        }
    }

    cout << "\nNilai terbesar di dalam matriks adalah: " << maks;
}

