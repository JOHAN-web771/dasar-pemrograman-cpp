#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file("absensi.txt", ios::app);
    string nama;
    char hadir;

    cout << "Nama mahasiswa: ";
    getline(cin, nama);
    cout << "Hadir (Y/T): ";
    cin >> hadir;

    file << nama << " - " << hadir << endl;
    file.close();

    cout << "Data absensi tersimpan";
}

