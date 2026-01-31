#include <iostream>
using namespace std;

int main() {
    int absensi[50][20];   // Maks 50 mahasiswa, 20 pertemuan
    int mhs, pertemuan;

    cout << "===== SISTEM ABSENSI MAHASISWA =====\n";
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> mhs;

    cout << "Masukkan jumlah pertemuan: ";
    cin >> pertemuan;

    // Input absensi
    for(int i = 0; i < mhs; i++) {
        cout << "\nMahasiswa ke-" << i+1 << endl;
        for(int j = 0; j < pertemuan; j++) {
            cout << "Pertemuan ke-" << j+1 << " (1=Hadir, 0=Tidak): ";
            cin >> absensi[i][j];
        }
    }

    // Output tabel absensi
    cout << "\n===== DATA ABSENSI =====\n";
    cout << "Mhs\\Pert ";
    for(int j = 0; j < pertemuan; j++) {
        cout << j+1 << " ";
    }
    cout << endl;

    for(int i = 0; i < mhs; i++) {
        cout << "Mhs " << i+1 << "   ";
        for(int j = 0; j < pertemuan; j++) {
            cout << absensi[i][j] << " ";
        }
        cout << endl;
    }

    // Rekap kehadiran
    cout << "\n===== REKAP KEHADIRAN =====\n";
    for(int i = 0; i < mhs; i++) {
        int hadir = 0;
        for(int j = 0; j < pertemuan; j++) {
            if(absensi[i][j] == 1)
                hadir++;
        }
        cout << "Mahasiswa ke-" << i+1
             << " hadir " << hadir
             << " dari " << pertemuan << " pertemuan\n";
    }

    return 0;
}

