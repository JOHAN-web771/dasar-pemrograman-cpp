#include <iostream>
using namespace std;

int main() {
    string nama[3];
    
	cout << "\n** Program Daftar Nama Sederhana **\n";
    for(int i=0;i<3;i++){
        cout<<"Nama ke-"<<i+1<<": ";
        cin>>nama[i];
    }

    cout<<"\n== DAFTAR NAMA ORANG HILANG ==\n";
    for(int i=0;i<3;i++){
        cout<<nama[i]<<endl;
    }
    return 0;
}

