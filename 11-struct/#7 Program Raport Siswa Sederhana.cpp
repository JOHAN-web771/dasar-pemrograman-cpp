#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct NilaiSiswa {
    string nama;
    int nilaiAkademik;
    int nilaiAdab;
    double rataRata;
    string keterangan;
};

int main() {
    int jumlah;
    char lanjut;

    do {
        cout << "\n@@ Program Data Raport Siswa Sederhana @@\n";
        cout << "Masukkan jumlah siswa: ";
        cin >> jumlah;
        cin.ignore();

        vector<NilaiSiswa> siswa(jumlah);

        for (int i = 0; i < jumlah; i++) {
            cout << "\nData SISWA ke-" << i + 1 << endl;

            cout << "Nama Siswa       : ";
            getline(cin, siswa[i].nama);

            cout << "Nilai Akademik   : ";
            cin >> siswa[i].nilaiAkademik;

            cout << "Nilai Adab       : ";
            cin >> siswa[i].nilaiAdab;
            cin.ignore();

            // Hitung rata-rata
            siswa[i].rataRata = (siswa[i].nilaiAkademik + siswa[i].nilaiAdab) / 2.0;

            // Tentukan keterangan
            if (siswa[i].rataRata >= 50) {
                siswa[i].keterangan = "Lulus";
            } else {
                siswa[i].keterangan = "Tidak Lulus";
            }

            // Cetak raport
            cout << "\n[[[ Raport Siswa SD Negeri 1 Yogyakarta ]]]\n";
            cout << "Nama            : " << siswa[i].nama << endl;
            cout << "Nilai Akademik  : " << siswa[i].nilaiAkademik << endl;
            cout << "Nilai Adab      : " << siswa[i].nilaiAdab << endl;
            cout << "Rata-rata       : " << siswa[i].rataRata << endl;
            cout << "Keterangan      : " << siswa[i].keterangan << endl;
        }

        cout << "\nInput ulang program? (y/n): ";
        cin >> lanjut;
        cin.ignore();

    } while (lanjut == 'y' || lanjut == 'Y');{ 
     	cout << "Terimakasih Telah menggunakan Layanan Kami ;} ";
	}

    return 0;
}

