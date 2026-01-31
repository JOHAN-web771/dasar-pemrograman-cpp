#include <iostream>
using namespace std;

int main() {
    int baris, kolom;
    
    cout << "=== PROGRAM PENJUMLAHAN DUA MATRIKS ===" << endl;
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;
    
    int matriks1[10][10], matriks2[10][10], hasil[10][10];
    
    // Input matriks pertama
    cout << "\nMasukkan elemen Matriks 1:" << endl;
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matriks1[i][j];
        }
    }
    
    // Input matriks kedua
    cout << "\nMasukkan elemen Matriks 2:" << endl;  
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matriks2[i][j];
        }
    }
    
    // Proses penjumlahan
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
    
    // Tampilkan hasil
    cout << "\nMatriks 1:" << endl;
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << matriks1[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nMatriks 2:" << endl;
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << matriks2[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nHasil Penjumlahan:" << endl;
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
