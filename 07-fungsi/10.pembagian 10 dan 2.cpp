#include <iostream>
using namespace std;

// Fungsi dengan nilai kembali (int)
int tambah(int a, int b) {
    int hasil = a / b;
    return hasil; // Mengembalikan nilai integer
}

int main() {
    int angka1 = 10;
    int angka2 = 2;
    int total = tambah(angka1, angka2); // Menyimpan nilai kembalian

    cout << "Hasil pembagian dari bilangan ini adalah: " << total << endl; // Menggunakan nilai kembalian
    return 0;
}

