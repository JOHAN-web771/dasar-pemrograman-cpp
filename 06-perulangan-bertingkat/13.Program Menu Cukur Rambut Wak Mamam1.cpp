#include <iostream>
using namespace std;

int main() {
    int pilihan;
   char lanjut;
  do{
    
    cout << "\n{{ Selamat Datang Di Cukur Rambut Wak Mamam }}\n";
    cout << "Model Pilihan Terpopuler: \n";
    cout << "1.Model Cepak\n";
    cout << "1.Model Cepmek\n";
    cout << "1.Model Botak Licin\n";
    cout << "Masukkan Pilihan anda (1-3): ";
    cin >> pilihan;
    
    switch (pilihan){
    	case 1: 
    		cout << "Harga 20.000";
    		break;
    	case 2:
    		cout << "Harga Spesial: 50.000";
    		break;
    	case 3:
    		cout << "Harga cukup 25.000";
    		break;
    	default:
    		cout << "Maaf sistem Sibuk!";
    		break;
	} cout << "\nMau Lanjut? (y/n): \n";
	cin >> lanjut;
	
}while (lanjut == 'Y' || lanjut =='y');
cout << "Terimakasih Bro ;}";

    return 0;
}

