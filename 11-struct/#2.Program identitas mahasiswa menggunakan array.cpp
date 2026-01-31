#include <iostream>
using namespace std;

struct Mahasiswa {
    char nama [20];
    char alamat [30];
    int nim;
};



int main() {
    Mahasiswa mhs [3];	// Menggunakan array
    for (int i=0; i<3; i++){
	

    cout << "Masukkan nama: ";
    cin >> mhs[i].nama;

    cout << "Masukkan alamat: ";
    cin>>gets (mhs[i].alamat);

    cout << "Masukkan NIM: ";
    cin >> mhs[i].nim;
}


    cout << "\n=== Data Mahasiswa ===" << endl;
    for(int i=0; i<3; i++){
	
    cout << "Nama 	: " << mhs[i].nama << endl;
    cout << "alamat  : " << mhs[i].alamat << endl;
    cout << "NIM  	: " << mhs[i].nim << endl;
}

    return 0;
}

