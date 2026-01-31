#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    int nilai[n];
    int *p = nilai;
    int total = 0;

    // input nilai mahasiswa
    for(int i = 0; i < n; i++) {
        cout << "Nilai mahasiswa ke-" << i+1 << ": ";
        cin >> *(p + i);
        total += *(p + i);
    }

    float rata = (float)total / n;

    // output
    cout << "\nRata-rata Nilai Mahasiswa: " << rata << endl;

    return 0;
}

