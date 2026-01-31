#include <iostream>
using namespace std;

int main() {
    int angka[4] = {5, 10, 15, 20};
    int *p = angka;
    int total = 0;

    for(int i = 0; i < 4; i++) {
        total += *(p + i);
    }

    cout << "Total: " << total;
}

