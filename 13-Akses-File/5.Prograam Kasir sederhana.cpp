#include <iostream>
#include <fstream>
using namespace std;

struct barang {
    string nama;
    string nik;
    string alamat;
    char darah;
};

// ================= INPUT DATA =================
void inputData() {
    int jumlah;
    cout << "Masukkan Jumlah Pembeli: ";
    cin >> jumlah;
    cin.ignore();

    barang* p = new barang[jumlah];

    ofstream simpanData("Data Pembeli.txt", ios::app);
    if (!simpanData.is_open()) {
        cout << "Gagal membuka file!\n";
        return;
    }

    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Pembeli ke-" << i + 1 << endl;

        cout << "Nama   : ";
        getline(cin, p[i].nama);

        cout << "NIK    : ";
        getline(cin, p[i].nik);

        cout << "Alamat : ";
        getline(cin, p[i].alamat);

        cout << "Golongan Darah : ";
        cin >> p[i].darah;
        cin.ignore();

        // SIMPAN KE FILE
        simpanData << "Nama   : " << p[i].nama << endl;
        simpanData << "NIK    : " << p[i].nik << endl;
        simpanData << "Alamat : " << p[i].alamat << endl;
        simpanData << "Darah  : " << p[i].darah << endl;
        simpanData << "-------------------" << endl;
    }

    simpanData.close();
    delete[] p;

    cout << "\nData berhasil disimpan!\n";
}

// ================= HITUNG DATA =================
int hitungData() {
    ifstream baca("Data Pembeli.txt");
    if (!baca.is_open()) {
        cout << "File tidak ditemukan!\n";
        return 0;
    }

    string line;
    int jumlah = 0;

    while (getline(baca, line)) {
        if (line.find("Nama") != string::npos) {
            jumlah++;
        }
    }

    baca.close();
    return jumlah;
}

// ================= MAIN =================
int main() {
    int pilih;
    char lanjut;

    do {
        cout << "\nMENU\n";
        cout << "1. Input Data Pembeli\n";
        cout << "2. Hitung Jumlah Pembeli\n";
        cout << "3. Keluar\n";
        cout << "Masukkan Pilihan: ";
        cin >> pilih;
        cin.ignore();

        if (pilih == 1) {
            inputData();
        } 
        else if (pilih == 2) {
            cout << "\nJumlah Pembeli: " << hitungData() << endl;
        } 
        else if (pilih == 3) {
            cout << "Terima kasih!\n";
        } 
        else {
            cout << "Pilihan tidak tersedia!\n";
        }cout <<"mau lanjut?";
        cin >> lanjut;

    } while (lanjut == 'Y'||lanjut == 'y');
    
    

    return 0;
}

