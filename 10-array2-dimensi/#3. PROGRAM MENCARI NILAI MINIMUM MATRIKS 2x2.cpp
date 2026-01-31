#include <iostream>
using namespace std;

int main(){
    int A[2][2];
    cout << "=== MENCARI NILAI MINIMUM MATRIKS 2x2 ===\n";

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout << "Masukkan angka baris " << i+1 << " kolom " << j+1 << ": ";
            cin >> A[i][j];
        }
    }

    int min = A[0][0];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(A[i][j] < min)
                min = A[i][j];
        }
    }

    cout << "\nNilai terkecil di dalam matriks adalah: " << min;
}

