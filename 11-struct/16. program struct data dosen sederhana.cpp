#include <iostream>
using namespace std;

struct Dosen {
    string nama;
    string matkul;
};

int main() {
    Dosen d;

    cout << "Nama Dosen      : ";
    cin >> d.nama;
    cout << "Mata Kuliah     : ";
    cin >> d.matkul;

    cout << "\nDosen: " << d.nama << endl;
    cout << "Matkul: " << d.matkul;
    return 0;
}

