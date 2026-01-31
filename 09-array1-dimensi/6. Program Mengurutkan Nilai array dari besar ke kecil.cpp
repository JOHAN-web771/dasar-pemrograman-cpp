#include <iostream>
using namespace std;

int main (){
    int n;
    int a[100];

    cout << "[ Program Mengurutkan Array dari Besar ke Kecil ]\n";
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    // Input array
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    // Proses sorting (Descending)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Output hasil
    cout << "\nArray setelah diurutkan (Besar ke Kecil):\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}


