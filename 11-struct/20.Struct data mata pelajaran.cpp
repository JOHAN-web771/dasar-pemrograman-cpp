#include <iostream>
using namespace std;

struct Pelajaran {
    string namaMapel;
    int jam;
};

int main() {
    Pelajaran p;

    cout << "Nama Pelajaran : ";
    cin >> p.namaMapel;
    cout << "Jumlah Jam     : ";
    cin >> p.jam;

    cout << "\n" << p.namaMapel 
         << " (" << p.jam << " jam)";
    return 0;
}

