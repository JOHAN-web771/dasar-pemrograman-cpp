#include <iostream>
using namespace std;

// fungsi rekursif untuk menjumlahkan pengunjung
int totalPengunjung(int pengunjung[], int n) {
    if (n == 0)
        return 0;                     // basis rekursi
    else
        return pengunjung[n-1] + totalPengunjung(pengunjung, n-1);
}

int main() {
    // contoh data pengunjung selama 10 bulan terakhir
    int pengunjung[10] = {120, 135, 150, 160, 145, 170, 180, 190, 200, 210};

    int jumlah = totalPengunjung(pengunjung, 10);

    cout << "Total pengunjung selama 10 bulan terakhir adalah: "
         << jumlah << endl;

    return 0;
}

