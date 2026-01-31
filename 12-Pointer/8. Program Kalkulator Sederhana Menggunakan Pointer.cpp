#include <iostream>
using namespace std;

int main() {
    int pilihan;   // menampung pilihan menu
    int a, b;      // variabel untuk dua bilangan

    // pointer yang menunjuk ke alamat variabel a dan b
    int *pa = &a;
    int *pb = &b;

    char ulang;    // untuk menanyakan apakah program diulang

    // perulangan do–while supaya program berjalan terus
    do {
        // menampilkan menu kalkulator
        cout << "===== Kalkulator Sederhana =====" << endl;
        cout << "1. Pertambahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;   // input pilihan menu

        // jika pilihan 1–4, berarti butuh dua bilangan
        if (pilihan >= 1 && pilihan <= 4) {
            cout << "Masukkan bilangan pertama: ";
            cin >> *pa;   // input melalui pointer (nilai masuk ke a)

            cout << "Masukkan bilangan kedua  : ";
            cin >> *pb;   // input melalui pointer (nilai masuk ke b)
        }

        // menentukan operasi yang dipilih
        switch (pilihan) {

            // operasi penjumlahan
            case 1:
                cout << "Hasil Pertambahan: " << (*pa + *pb) << endl;
                break;

            // operasi pengurangan
            case 2:
                cout << "Hasil Pengurangan: " << (*pa - *pb) << endl;
                break;

            // operasi perkalian
            case 3:
                cout << "Hasil Perkalian  : " << (*pa * *pb) << endl;
                break;

            // operasi pembagian
            case 4:
                if (*pb == 0)  // validasi agar tidak membagi dengan nol
                    cout << "Tidak bisa membagi dengan nol!" << endl;
                else
                    cout << "Hasil Pembagian : " << ((float)*pa / *pb) << endl;
                break;

            // keluar dari program
            case 5:
                cout << "Keluar dari program." << endl;
                return 0;

            // jika pilihan tidak valid
            default:
                cout << "Menu tidak valid!" << endl;
        }

        cout << "==================================" << endl;

        // menanyakan apakah program diulang
        cout << "Ulangi program? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');  // kondisi pengulangan

    // pesan akhir program
    cout << "=== Program selesai ===" << endl;

    return 0;
}

