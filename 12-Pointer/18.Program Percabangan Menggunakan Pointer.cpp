#include <iostream>
using namespace std;

int main() {
    int nilai;
    int *p = &nilai;

    cout << "Masukkan nilai: ";
    cin >> *p;

    if(*p >= 75)
        cout << "Lulus";
    else
        cout << "Tidak Lulus";
}

