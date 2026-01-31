//.deret aritmatika
#include <iostream>
using namespace std;

int main() {
    int a, d, n;
    cout << "Masukkan suku pertama: ";
    cin >> a;
    cout << "Masukkan beda: ";
    cin >> d;
    cout << "Masukkan jumlah suku: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << a + i * d << " ";
    }
    return 0;
}

