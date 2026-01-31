#include <iostream>
using namespace std;

int jumlah(int n) {
    if (n <= 1)
        return n;          // basis rekursi
    else
        return n + jumlah(n - 1);   // rekursi
}

int main() {
    int n;
    cout << "Masukkan Nilai n: ";
    cin >> n;

    cout << "Jumlah = " << jumlah(n) << endl;

    return 0;
}

