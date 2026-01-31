#include <iostream>
using namespace std;

struct Jadwal {
    string hari;
    string mataKuliah;
};

int main() {
    Jadwal j;

    cout << "Hari        : ";
    cin >> j.hari;
    cout << "Mata Kuliah : ";
    cin >> j.mataKuliah;

    cout << "\n" << j.mataKuliah << " hari " << j.hari;
    return 0;
}

