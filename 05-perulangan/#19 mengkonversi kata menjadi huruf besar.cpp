//9.mengonversi kata menjadi huruf besar

#include <iostream>
#include <string>
using namespace std;

int main() {
    string kata;

    cout << "Masukkan kata: "; cin >> kata;
    for (int i = 0; i < kata.length(); i++) {
        kata[i] = toupper(kata[i]);
    }
    cout << "Kata dalam huruf besar: " << kata << endl;
    return 0;
}
