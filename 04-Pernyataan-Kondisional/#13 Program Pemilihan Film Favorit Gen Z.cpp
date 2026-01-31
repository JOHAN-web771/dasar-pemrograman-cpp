#include <iostream>
using namespace std;

int main()
{
	int huruf;
	cout<<"========================================"<<endl;
	cout<<"        Daftar FILM kesukaan Gen Z      "<<endl;
	cout<<"========================================"<<endl;
	cout<<"1.Doraemon"<<endl;
	cout<<"2.Naruto"<<endl;
	cout<<"3.One Piece"<<endl;
	
	cout<<"Masukkan Pilihan anda (angka) : "; cin>> huruf;
	switch (huruf){
		case 1:
			cout<<"anda Memilih Doraemon";
			break;
		case 2:
			cout<<"anda Memilih Naruto";
			break;
		case 3:
			cout<<"anda Memilih One Piece";
			break;
		default :
			cout<<"pilihan tidak valid"<<endl;
			
	}
	return 0;
	
}
