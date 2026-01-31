#include <iostream>
using namespace std;

int main(){

    // Program untuk mengisi dan menampilkan matriks 2 dimensi

    int baris, kolom;

    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    int m[baris][kolom];

    cout << "\nSilahkan masukkan elemen matriks:\n";
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }

    cout << "\n=== Tampilan Matriks ===\n";
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

