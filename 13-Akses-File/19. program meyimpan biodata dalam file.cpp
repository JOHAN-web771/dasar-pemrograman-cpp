#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file("biodata.txt");
    string nama, alamat;

    cout << "Nama   : ";
    getline(cin, nama);
    cout << "Alamat : ";
    getline(cin, alamat);

    file << "Nama   : " << nama << endl;
    file << "Alamat : " << alamat << endl;
    file.close();

    cout << "Biodata tersimpan";
}

