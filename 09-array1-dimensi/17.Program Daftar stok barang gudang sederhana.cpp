#include <iostream>
using namespace std;

int main() {
	string nama[2];
    int stok[2];
	
	cout << "\n[ Program Daftar stok Barang Gudang Sederhana ]\n";
    for(int i=0;i<2;i++){
    	cout << "Masukkan Nama Barang Ke- "<<i+1<<":";
    	getline(cin, nama[i]);
        cout<<"Masukkan stok barang ke-"<<i+1<<"(box): ";
        cin>>stok[i];
        cin.ignore();    }

    cout<<"\n== Data Stok Barang ==\n";
    for(int i=0;i<2;i++){
        cout<<"||Barang: "<<nama[i]<<"- "<<stok[i]<<"box ||"<<endl;
    }
    return 0;
}

