#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *p = &a;

    (*p)++;
    cout << "Nilai setelah increment: " << a << endl;
}

