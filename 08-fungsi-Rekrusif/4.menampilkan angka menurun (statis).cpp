#include <iostream>
using namespace std;

void tampil(int n) {
    if (n == 0)
        return;
    cout << n << " ";
    tampil(n - 1);
}

int main() {
    tampil(5);
    return 0;
}


