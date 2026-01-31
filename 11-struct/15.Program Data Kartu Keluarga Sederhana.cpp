#include <iostream>
using namespace std;

// Struct Data Anggota Keluarga
struct AnggotaKK {
    string nama;
    string status;        // Kepala Keluarga / Ibu Rumah Tangga / Anak
    long long nik;
    char golonganDarah;
    string tanggalLahir;
    string alamat;
};

int main() {
    int jumlah;

    cout << "Masukkan Jumlah Anggota Keluarga : ";
    cin >> jumlah;
    cin.ignore();

    // Array struct
    AnggotaKK kk[jumlah];

    // Input data
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Anggota ke-" << i + 1 << endl;

        cout << "Nama            : ";
        getline(cin, kk[i].nama);

        cout << "Status Anggota  : ";
        getline(cin, kk[i].status);

        cout << "NIK             : ";
        cin >> kk[i].nik;
        cin.ignore();

        cout << "Golongan Darah  : ";
        cin >> kk[i].golonganDarah;
        cin.ignore();

        cout << "Tanggal Lahir   : ";
        getline(cin, kk[i].tanggalLahir);

        cout << "Alamat          : ";
        getline(cin, kk[i].alamat);
    }

    // Output data
    cout << "\n=== DATA KARTU KELUARGA ===" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << "\nAnggota ke-" << i + 1 << endl;
        cout << "Nama           : " << kk[i].nama << endl;
        cout << "Status         : " << kk[i].status << endl;
        cout << "NIK            : " << kk[i].nik << endl;
        cout << "Gol. Darah     : " << kk[i].golonganDarah << endl;
        cout << "Tanggal Lahir  : " << kk[i].tanggalLahir << endl;
        cout << "Alamat         : " << kk[i].alamat << endl;
    }

    return 0;
}

