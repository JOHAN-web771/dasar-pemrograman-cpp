#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Mahasiswa {
    string nama;
    string nik;
    string alamat;
    char golonganDarah;
};

void inputData() {
    int jumlah;

    cout << "Masukkan Jumlah Mahasiswa: ";
    cin >> jumlah;
    cin.ignore();

    // Gunakan vector (bukan array dinamis)
    vector<Mahasiswa> p(jumlah);

    ofstream simpanData("DataMahasiswa.txt", ios::app);
    if (!simpanData.is_open()) {
        cout << "Gagal Membuka File!" << endl;
        return;
    }

    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;

        cout << "Masukkan Nama Mahasiswa            : ";
        getline(cin, p[i].nama);

        cout << "Masukkan NIK Mahasiswa             : ";
        getline(cin, p[i].nik);

        cout << "Masukkan Alamat Mahasiswa          : ";
        getline(cin, p[i].alamat);

        cout << "Masukkan Golongan Darah Mahasiswa  : ";
        cin >> p[i].golonganDarah;
        cin.ignore();

        simpanData << "Nama           : " << p[i].nama << endl;
        simpanData << "NIK            : " << p[i].nik << endl;
        simpanData << "Alamat         : " << p[i].alamat << endl;
        simpanData << "Golongan Darah : " << p[i].golonganDarah << endl;
        simpanData << "-----------------------------" << endl;
    }

    simpanData.close();
    cout << "\nData berhasil disimpan.\n";
}

int hitungData() {
    ifstream simpanData("DataMahasiswaUad.txt");
    if (!simpanData.is_open()) {
        cout << "File tidak ditemukan!" << endl;
        return 0;
    }

    string baris;
    int jumlahBlok = 0;

    while (getline(simpanData, baris)) {
        if (baris.find("Nama           :") != string::npos) {
            jumlahBlok++;
        }
    }

    simpanData.close();
    return jumlahBlok;
}

int main() {
    char lanjut;
    int pilih;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1. Input Data Mahasiswa\n";
        cout << "2. Hitung Jumlah Mahasiswa\n";
        cout << "3. Keluar\n";
        cout << "Masukkan Pilihan Anda: ";
        cin >> pilih;
        cin.ignore();

        if (pilih == 1) {
            inputData();
        }
        else if (pilih == 2) {
            cout << "\nJumlah Mahasiswa: " << hitungData() << endl;
        }
        else if (pilih == 3) {
            cout << "\nProgram Selesai.\n";
            break;
        }
        else {
            cout << "\nMenu tidak tersedia!\n";
        }

        cout << "\nLanjut? (y/n): ";
        cin >> lanjut;
        cin.ignore();

    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}


