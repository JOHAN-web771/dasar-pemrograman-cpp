//7.menghitung jumlah digit

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan bilangan: ";
    cin >> n;

    int jumlahDigit = 0;
    while (n > 0) {
        jumlahDigit += n % 10;
        n /= 10;
    }
    cout << "Jumlah digit: " << jumlahDigit << endl;
    return 0;
}
