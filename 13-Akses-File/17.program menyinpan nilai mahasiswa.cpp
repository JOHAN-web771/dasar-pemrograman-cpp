#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file("nilai.txt");
    string nama;
    int nilai;

    cout << "Nama: ";
    getline(cin, nama);
    cout << "Nilai: ";
    cin >> nilai;

    file << "Nama : " << nama << endl;
    file << "Nilai: " << nilai << endl;
    file.close();

    cout << "Data nilai tersimpan";
}

