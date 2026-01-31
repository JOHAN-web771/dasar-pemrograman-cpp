#include <iostream>
using namespace std;

void luasPersegi(int sisi) {   // void (tanpa return)
    int luas = sisi * sisi;
    cout << "Luas persegi = " << luas << endl;
}

int main() {
    int s;
    cout << "Masukkan sisi: ";
    cin >> s;

    luasPersegi(s);
    return 0;
}

