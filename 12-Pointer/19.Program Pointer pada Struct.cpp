#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
};

int main() {
    Mahasiswa m = {"Johan", 20};
    Mahasiswa *p = &m;

    cout << "Nama : " << p->nama << endl;
    cout << "Umur : " << p->umur << endl;
}

