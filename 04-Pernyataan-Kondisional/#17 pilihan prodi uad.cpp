#include <iostream>
using namespace std;

int main(){
	int pilihan;
	cout<<"=================================================="<<endl;
	cout<<"===DAFTAR PRODI FAKULTAS TEKNOLOGI INDUSTRI UAD==="<<endl;
	cout<<"=================================================="<<endl;
	cout<<"||1.Informatika"<<endl;
	cout<<"||2.Teknik Elektro"<<endl;
	cout<<"||3.Teknologi pangan"<<endl;
	cout<<"||4.Teknik Industri"<<endl;
	cout<<"||5.Teknik Kimia"<<endl;
	
	cout<<"Masukkan Pilihan Anda (1-5): ";  cin>>pilihan;
	
	switch (pilihan) {
		case 1:
			cout<<"Anda memilih prodi Informatika";
			break;
		case 2:
			cout<<"Anda memilih prodi Teknik Elektro";
			break;
		case 3:
			cout<<"Anda memilih prodi Teknologi Pangan";
			break;
		case 4:
			cout<<"Anda memilih prodi Teknik Industri";
			break;
		case 5: 
		                cout<<"Anda memilih prodi Teknik Kimia";
		                break;
		                
	}
	return 0;
	
	
	
}
