#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *p = &a;

	cout << "Nilai sebelum Decrement: " << a << endl;
    (*p)--;
    cout << "Nilai setelah Decrement: " << a << endl;
}

