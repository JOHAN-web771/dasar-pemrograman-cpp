#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file("belanja.txt", ios::app);
    string barang;

    cout << "Masukkan barang belanja: ";
    getline(cin, barang);

    file << barang << endl;
    file.close();

    cout << "Barang ditambahkan ke daftar";
}

