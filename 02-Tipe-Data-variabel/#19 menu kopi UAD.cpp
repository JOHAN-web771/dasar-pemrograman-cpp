#include <iostream>

using namespace std;
int main(){
	cout << "       #Daftar menu Kopi UAD #" << endl;
	cout << "       ========================" << endl;
	cout << "        1. Capucino" << endl;
	cout << "        2. Espreso" << endl;
	cout << "        3. Americano" << endl;
	cout << "        Masukkan  Angka Pilihan anda:" << std::endl;
	
	
	int pilihan;
    cin >> pilihan;
	
	switch (pilihan) {
		case 1:
			cout << "  Anda memilih Capucino." << endl;
			break;
			
		case 2:
			cout << "  Anda memilih Espreso." << endl;
			break;
			
		case 3:
			cout << "  Anda memilih Americno." << endl;
			break;
			
		
		default:
			cout << "  Pilihan tidak valid." << endl;
	}
	
	
	std::cout << "         Terimakasih...." <<std::endl;
	cout <<endl;
	
	return 0;
	
}
