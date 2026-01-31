#include <iostream>
using namespace std;

void desimalKeBiner(int n) {
    if (n == 0)
        return;        // base case

    desimalKeBiner(n / 2);   // panggil diri sendiri
    cout << n % 2;           // tampilkan sisa pembagian
}

int main() {
    int n;
    cout << "Masukkan bilangan desimal: ";
    cin >> n;

    if (n == 0)
        cout << 0;
    else
        desimalKeBiner(n);

    return 0;
}

