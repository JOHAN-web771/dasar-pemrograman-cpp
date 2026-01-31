#include <iostream>
using namespace std;

int main(){
    int nilai[10][3];   // array 2D: 10 mahasiswa, 3 mata kuliah
    int mhs;            // jumlah mahasiswa

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> mhs;

    cout << "\nMasukkan nilai 3 mata kuliah untuk setiap mahasiswa:\n";
    for(int i = 0; i < mhs; i++) {
        cout << "Mahasiswa ke-" << i+1 << endl;
        for(int j = 0; j < 3; j++) {
            cout << "Nilai mata kuliah ke-" << j+1 << " : ";
            cin >> nilai[i][j];
        }
    }

    cout << "\nTotal nilai tiap mahasiswa:\n";
    for(int i = 0; i < mhs; i++) {
        int total = 0;
        for(int j = 0; j < 3; j++) {
            total += nilai[i][j];
        }
        cout << "Total mahasiswa ke-" << i+1 << " = " << total << endl;
    }

    return 0;
}

