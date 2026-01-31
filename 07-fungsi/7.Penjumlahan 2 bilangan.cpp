#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int main() {
    int angka1=4;
    int angka2=5;
    int total = tambah(angka1, angka2);
    cout<<"Hasil Penjumlahan adalah: "<<total<<endl;
    
}

