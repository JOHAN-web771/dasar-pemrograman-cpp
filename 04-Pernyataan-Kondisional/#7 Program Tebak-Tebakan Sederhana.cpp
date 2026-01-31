#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string jawaban;
    char lanjut;
    string jawabanBenar = "ronaldo";

    do {
        cout << "\n== Program Tebak-Tebakan Sederhana ==\n";
        cout << "Siapakah nama pemain sepak bola terkenal yang berasal dari Portugal?\n";
        cout << "Jawaban: ";
        getline(cin, jawaban);

        // Ubah input ke huruf kecil agar tidak case-sensitive
        transform(jawaban.begin(), jawaban.end(), jawaban.begin(), ::tolower);

        if (jawaban == jawabanBenar) {
            cout << "Respect! Jawaban kamu BENAR Bro\n";
        } else {
            cout << "Maaf, jawaban kamu SALAH ?\n";
        }

        cout << "Mau coba lagi? (y/n): ";
        cin >> lanjut;
        cin.ignore();

    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "\nJawaban yang benar adalah: RONALDO ?\n";
    cout << "Terima kasih sudah bermain!\n";

    return 0;
}

