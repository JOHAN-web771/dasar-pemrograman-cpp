#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;

    cout << "Ukuran variabel a: " << sizeof(a) << " byte" << endl;
    cout << "Ukuran pointer p : " << sizeof(p) << " byte" << endl;
}
