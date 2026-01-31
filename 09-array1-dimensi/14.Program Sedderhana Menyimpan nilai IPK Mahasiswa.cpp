#include <iostream>
using namespace std;

int main() {
    float nilai[5];

	cout << "\nProgram Sederhana Menyimpan nilai IPK mahasiswa }}\n";
    for(int i=0;i<5;i++){
        cout<<"Masukkan IPK Mahasiswa ke-"<<i+1<<"(ex. 3.5):";
        cin>>nilai[i];
    }

    cout<<"\n==	Daftar Nilai ==\n";
    for(int i=0;i<5;i++){
        cout<<"Nilai Mahasiswa ke-" <<i+1 << ":" << nilai[i]<<endl;
        cout << endl;
    }
    return 0;
}

