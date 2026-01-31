#include <iostream>
using namespace std;

int main(){
    int A[2][3];

    cout << "=== INPUT & TAMPILAN MATRIKS 2x3 ===\n";

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout << "Masukkan nilai baris " << i+1 << " kolom " << j+1 << ": ";
            cin >> A[i][j];
        }
    }

    cout << "\nMatriks yang berhasil dibuat:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

