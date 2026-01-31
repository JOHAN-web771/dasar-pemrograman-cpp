#include<iostream>
#include<fstream>
using namespace std;

struct pilihan{
	int pilih;
	string judul, penerbit, penulis;
	int tahun;
};
void menu(){
	cout<<"Selamat Datang Di Program Saya"<<endl;
	cout<<"Pilih :"<<endl;
	cout<<"1. Tambah Buku"<<endl;
	cout<<"2. Liat Jumlah Buku"<<endl;
	cout<<"3. Liat List Buku"<<endl;
	cout<<"4. Keluar"<<endl;
	cout<<"Masukan Pilihan Anda :";
}
void tambah(){
	pilihan t;
	cout<<"Masukan Nama Buku : ";getline(cin, t.judul);
	cout<<"Masukan Penulis Buku : ";getline(cin, t.penulis);
	cout<<"Masukan Penerbit Buku : ";getline(cin, t.penerbit);
	cout<<"Masukan Tahun Buku : ";cin>>t.tahun;cin.ignore();

	ofstream file("data.txt", ios::app);
		file<<"Judul\t :"<<t.judul<<endl;
		file<<"Penulis\t :"<<t.penulis<<endl;
		file<<"Penerbit :"<<t.penerbit<<endl;
		file<<"Tahun\t :"<<t.tahun<<endl<<endl;
}
void jumlah(){
	ifstream file("data.txt");
	if(!file){
		cout<<"Data Tidak Ditemukan";
		return;
	}
	string line;
	int jumlah = 0;
	while(getline(file, line)){
		if(line.find("Judul")==0){
			jumlah++;
		}
	}
	cout<<"Jumlah Buku Sekarang Adalah "<<jumlah<<endl;
}
void liat(){
	ifstream file("data.txt");
	
	if(!file){
		cout<<"Data Tidak Ditemukan.\n";
		return;
	}
	string line;
	cout<<"\n++++++ List Buku ++++++\n";
	while(getline(file, line)){
		cout<<line<<endl;
	}
	cout<<"Ini List Bukunya :)"<<endl<<endl;
}
void program(){
	int pilih;
	do{
		menu();
		cin>>pilih;cin.ignore();
		if(pilih == 1){
			tambah();
		}else if(pilih == 2){
			jumlah();
		}else if(pilih == 3){
			liat();
		}
	}while(pilih != 4);
	cout<<"Terimakasih";
}
int main(){
	program();
	return 0;
}

