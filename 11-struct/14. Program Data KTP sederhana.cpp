#include <iostream>
using namespace std;

// Struct Data KTP
struct KTP {
    string nama;
    long long nik;
    string agama;
    char golonganDarah;
    string alamat;
};

int main() {
    KTP data;

    cout << "=== INPUT DATA KTP ===" << endl;

    cout << "Nama            : ";
    getline(cin, data.nama);

    cout << "NIK             : ";
    cin >> data.nik;
    cin.ignore();

    cout << "Agama           : ";
    getline(cin, data.agama);

    cout << "Golongan Darah  : ";
    cin >> data.golonganDarah;
    cin.ignore();

    cout << "Alamat          : ";
    getline(cin, data.alamat);

    cout << "\n=== DATA KTP ===" << endl;
    cout << "Nama           : " << data.nama << endl;
    cout << "NIK            : " << data.nik << endl;
    cout << "Agama          : " << data.agama << endl;
    cout << "Gol. Darah     : " << data.golonganDarah << endl;
    cout << "Alamat         : " << data.alamat << endl;

    return 0;
}

