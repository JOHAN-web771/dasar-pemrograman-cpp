#include<iostream>
using namespace std;

int luas(int p, int l){
    return p*l;
}

int main(){
    int p;
    int l;
    cout<<"Masukkan Panjang: ";cin>>p;
    cout<<"Masukkan Lebar: ";cin>>l;
    
    cout << "Luas Persegi Panjang = " << luas(p, l) << endl;
    return 0;  // Tambahan untuk praktik baik, meskipun tidak wajib di semua compiler
}
