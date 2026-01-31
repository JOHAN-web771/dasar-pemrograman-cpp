#include <iostream>
using namespace std;

int main() {
    float suhu[3], tinggi[3], berat[3];

    for(int i=0;i<3;i++){
        cout <<"\nData Orang ke-"<<i+1<<endl;
        cout <<"Tinggi Badan(cm): ";
        cin >>tinggi[i];
        cout <<"Berat Badan(Kg): ";
        cin >>berat[i];
    }

    cout <<"\n||| Data yang Tersimpan |||\n";
    cout <<"---------------------------\n";
    
    for(int i=0;i<3;i++){
        cout <<" | Tinggi: "<<tinggi[i]
            <<" | Berat: "<<berat[i]<<endl;
    }
    return 0;
}

