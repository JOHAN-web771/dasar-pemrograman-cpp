#include <iostream>
using namespace std;

int main() {
    float suhuNegara[3];
    string nama[3];

    for(int i=0;i<3;i++){
        cout<<"\n== Data Suhu Negara ke-"<<i+1<<" =="<<endl;
        cout<<"Masukkan Nama Negara ke- "<< i+1 << ":";
        cin >>nama[i];
        cout<<"Masukkan Suhu Lingkungan (C): ";
        cin>>suhuNegara[i];
    }

    cout<<"\n{{ Data yang Tersimpan }}\n";
    cout <<"---------------------------\n";
    for(int i=0;i<3;i++){
        cout<<"Negara ke- "<<i+1<<" | Suhu: "<<suhuNegara[i]<<"C"<<endl;
    }
    return 0;
}

