#include <iostream>
using namespace std;

int pangkat(int a, int b) {
    if (b == 0)
        return 1;              // base case: a^0 = 1
    else
        return a * pangkat(a, b - 1);   // recursive case
}

int main() {
    int a, b;
    cout << "Masukkan bilangan pokok (a): ";
    cin >> a;
    cout << "Masukkan pangkat (b): ";
    cin >> b;

    cout << "Hasil " << a << "^" << b << " = " << pangkat(a, b) << endl;
    return 0;
}

