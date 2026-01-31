#include <iostream>
using namespace std;

int main() {
    int *p = new int;

    cout << "Masukkan nilai: ";
    cin >> *p;

    cout << "Nilai yang dimasukkan: " << *p << endl;

    delete p;
}

