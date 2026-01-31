#include <iostream>
using namespace std;

void desimalKeOktal(int n) {
    if (n == 0)
        return;          // base case

    desimalKeOktal(n / 8);  // bagi 8 terus
    cout << n % 8;          // cetak sisa
}

int main() {
    int n;
    cout << "Masukkan bilangan desimal: ";
    cin >> n;

    if (n == 0)
        cout << 0;
    else
        desimalKeOktal(n);

    return 0;
}

