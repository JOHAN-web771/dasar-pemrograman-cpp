#include <iostream>
#include <string>
using namespace std;

struct DataKtp {
    string nama;
    string nik;
    string alamat;
    string keluhan;
    string diagnosa;
};

int main() {
    DataKtp x[4];

    cout << "\n{{ Data Pasien Rumah Sakit Wowo Insani }}\n";
    cout << "--------------------------------------------\n";

    for (int i = 0; i < 4; i++) {
        cout << "\nData Pasien ke-" << i + 1 << endl;

        cout << "Nama Pasien     : ";
        getline(cin, x[i].nama);

        cout << "NIK Pasien      : ";
        getline(cin, x[i].nik);

        cout << "Alamat Pasien   : ";
        getline(cin, x[i].alamat);

        cout << "Keluhan Pasien  : ";
        getline(cin, x[i].keluhan);

        cout << "\n***********************************************\n";
        cout << "Diagnosa Dokter : ";
        getline(cin, x[i].diagnosa);
        cout << "***********************************************\n";

        cout << "\n--- LAPORAN MEDIS ---\n";
        cout << "Nama Pasien     : " << x[i].nama << endl;
        cout << "NIK Pasien      : " << x[i].nik << endl;
        cout << "Alamat Pasien   : " << x[i].alamat << endl;
        cout << "Keluhan Pasien  : " << x[i].keluhan << endl;
        cout << "Diagnosa Dokter : " << x[i].diagnosa << endl;
        cout << "--------------------------------------------\n";
    }

    return 0;
}

