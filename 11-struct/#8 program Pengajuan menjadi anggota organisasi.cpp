#include <iostream>
#include <string>
using namespace std;

struct Organisasi {
    string namaOrganisasi;
    string nama;
    float ipk;
    string pengalaman;
    string motivasi;
};

int main() {
    Organisasi x;

    cout << "\nProgram Sederhana Pengajuan Anggota Organisasi\n";
    cout << "----------------------------------------------------\n";

    cout << "Masukkan Nama Organisasi        : ";
    getline(cin, x.namaOrganisasi);

    cout << "Masukkan Nama Anda              : ";
    getline(cin, x.nama);

    cout << "Masukkan IPK Anda               : ";
    cin >> x.ipk;
    cin.ignore(); // membersihkan ENTER

    cout << "Organisasi sebelumnya           : ";
    getline(cin, x.pengalaman);

    cout << "Motivasi Diri                   : ";
    getline(cin, x.motivasi);

    cout << "\n== {{ Data Calon Anggota Organisasi Mahasiswa UAD }} ==\n";
    cout << "Nama Organisasi : " << x.namaOrganisasi << endl;
    cout << "Nama            : " << x.nama << endl;
    cout << "IPK             : " << x.ipk << endl;
    cout << "Pengalaman      : " << x.pengalaman << endl;
    cout << "Motivasi Diri   : " << x.motivasi << endl;

    cout << "\nTerima kasih telah mengisi formulir!\n";
    cout << "Nantikan pengumuman lebih lanjut di Instagram ya ;}\n";

    return 0;
}

