#include <iostream>
using namespace std;

int main() {
    int absensi[5]; // 1 = Hadir, 0 = Tidak Hadir

    for(int i=0;i<5;i++){
        cout<<"Mahasiswa ke-"<<i+1<<" (1=Hadir, 0=Tidak): ";
        cin>>absensi[i];
    }

    cout<<"\nData Absensi:\n";
    for(int i=0;i<5;i++){
        cout<<"Mahasiswa "<<i+1<<" : ";
        if(absensi[i]==1)
            cout<<"Hadir\n";
        else
            cout<<"Tidak Hadir\n";
    }
    return 0;
}

