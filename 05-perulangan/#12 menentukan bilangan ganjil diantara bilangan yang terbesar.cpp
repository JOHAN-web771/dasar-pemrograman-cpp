//2.bilangan ganjil 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan terbesar: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    return 0;
}



