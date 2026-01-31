#include <iostream>
using namespace std;

// Fungsi rekursif untuk mencari nilai terbesar di array
int cariMaks(int data[], int jumlahData) {

    // jika hanya ada 1 data, itulah yang terbesar
    if (jumlahData == 1)
        return data[0];

    // ambil nilai terbesar dari elemen sebelumnya
    int maksSebelumnya = cariMaks(data, jumlahData - 1);

    // bandingkan dengan elemen terakhir
    if (data[jumlahData - 1] > maksSebelumnya)
        return data[jumlahData - 1];
    else
        return maksSebelumnya;
}

int main() {
    int angka[] = {3, 9, 5, 7};
    int jumlah = 4;

    cout << "Nilai terbesar adalah: " << cariMaks(angka, jumlah);

    return 0;
}

