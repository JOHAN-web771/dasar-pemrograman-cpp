#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int nilai[n];
    int *p = nilai;

    // input data
    for(int i = 0; i < n; i++) {
        cout << "Nilai ke-" << i+1 << ": ";
        cin >> *(p + i);
    }

    int min = *p;
    int max = *p;

    // proses mencari min dan max
    for(int i = 1; i < n; i++) {
        if(*(p + i) < min)
            min = *(p + i);
        if(*(p + i) > max)
            max = *(p + i);
    }

    // output
    cout << "\nNilai Terkecil : " << min << endl;
    cout << "Nilai Terbesar : " << max << endl;

    return 0;
}

