#include <iostream>
using namespace std;

int pangkat(int a, int n) {
    if (n == 0)
        return 1;
    else
        return a * pangkat(a, n - 1);
}

int main() {
    cout << pangkat(2, 3);
    return 0;
}

