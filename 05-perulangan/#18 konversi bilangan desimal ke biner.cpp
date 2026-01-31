//8.konversi bilangan desimal ke biner

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan bilangan desimal: "; cin >> n;
    string biner = "";
    while (n > 0) {
        biner = (n % 2 == 0 ? "0" : "1") + biner;
        n /= 2;
    }
    cout << "Bilangan biner: " << biner << endl;
    return 0;
}
