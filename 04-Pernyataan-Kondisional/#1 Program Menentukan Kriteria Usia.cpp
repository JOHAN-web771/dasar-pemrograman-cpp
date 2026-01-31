#include <iostream>
using namespace std;

int main() {
	int umur;
	char lanjut;

do{
	cout << "\n{{ Program Menentukan Kriteria Usia }}\n";
	cout << "\n <<<<<<<<<<<<<<>>>>>>>>>>>>>\n";
	cout<<"Masukkan Umur Anda (tahun): ";
	cin>>umur;
	
	if(umur >= 60){
		cout << "Anda Termasuk Lansia";
	}else if(umur >= 40){
		cout << "Anda Termasuk Pra Lansia";
	}else if(umur >= 30){
		cout << " Anda Masih Produktif ";
	}else if (umur >= 15){
		cout << "Anda Masih Remaja";
	} else{
		cout << "Tidak Valid!";
	} cout << "\nmau coba Lagi (y/n)?  \n";
	cin >> lanjut;
	
}while (lanjut == 'y' || lanjut == 'Y');{
     cout << "Terimakasih Telah Mencoba! ;}";
}
	return 0;
	
	
}
