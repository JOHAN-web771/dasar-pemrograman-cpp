//6.rata-rata nilai

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah nilai: ";
    cin >> n;
    double total = 0;
    for (int i = 0; i < n; i++) {
        double nilai;
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai;
        total += nilai;
    }
    double rataRata = total / n;
    cout << "Rata-rata nilai: " << rataRata << endl;
    return 0;
}
