#include<iostream>
using namespace std;

int hitKeliling(int p, int l){
    return 2*(p+l);
}

int main(){
    int p;
    int l;
    cout<<"Masukkan Panjang: ";cin>>p;
    cout<<"Masukkan  Lebar: ";cin>>l;
    cout << "Keliling Persegi Panjang = " << hitKeliling(p, l) << endl;
    return 0;  // Tambahan untuk praktik baik, meskipun tidak wajib di semua compiler
}

