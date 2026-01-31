#include <iostream>
using namespace std;

int main() {
    int harga[5];

    for(int i=0;i<5;i++){
        cout<<"Masukkan harga produk ke-"<<i+1<<": ";
        cin>>harga[i];
    }

    cout<<"\nDaftar Harga Produk:\n";
    for(int i=0;i<5;i++){
        cout<<"Produk "<<i+1<<" : Rp"<<harga[i]<<endl;
    }
    return 0;
}

