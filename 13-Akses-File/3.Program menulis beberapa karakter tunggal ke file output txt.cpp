#include <iostream>
#include <fstream>
using namespace std;

// Program menulis karakter tunggal ke file output.txt
int main() {
    ofstream file("output.txt");  // deklarasi variabel file

    if (!file.is_open()) {
        cout << "File tidak dapat dibuka." << endl;
        return 1;
    }

    file.put('H');
    file.put('a');
    file.put('l');
    file.put('o');

    file.close();
    cout << "Data berhasil ditulis ke file." << endl;
    return 0;
}

