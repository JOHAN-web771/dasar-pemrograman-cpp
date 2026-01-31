#include <iostream>
using namespace std;

void cetakBaris(int n){
    if(n == 0) return;         // base case
    cout << "*";
    cetakBaris(n - 1);         // cetak sisa bintang
}

void segitigaNaik(int n){
    if(n == 0) return;         // base case

    segitigaNaik(n - 1);       // cetak baris sebelumnya dulu
    cetakBaris(n);             // lalu cetak baris sekarang
    cout << endl;
}

int main(){
    int n;
    cout << "Masukkan jumlah baris: ";
    cin >> n;

    segitigaNaik(n);
}

