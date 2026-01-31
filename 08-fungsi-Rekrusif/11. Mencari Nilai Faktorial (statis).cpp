#include <iostream>
using namespace std;

int faktorial(int n);

int main() {
    int n = 6;
    cout << "Nilai faktorial " << n << " adalah = " << faktorial(n) << endl;
    return 0;
}

int faktorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * faktorial(n - 1);
}

