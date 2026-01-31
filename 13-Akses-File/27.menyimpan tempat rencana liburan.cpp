#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file("liburan.txt", ios::app);
    string liburan;

    cout << "Masukkan tempat tujuan liburaan anda!: ";
    getline(cin, liburan);

    file << liburan << endl;
    file.close();

    cout << "Rencana telah ditambahkan ke daftar";
}

