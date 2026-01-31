#include <iostream>
#include <string>
using namespace std;

struct dataMotor{
	string namaMotor;
	string pabrikPembuat;
	string tahunPembuatan;
	string hargaMotor;
};

int main(){
	
	 dataMotor p;
	cout << "\n$$$$ Program Data Motor Sederhana $$$$\n";
	cout << "Masukkan Nama Motor: ";
	getline(cin, p.namaMotor);
	cout << "Masukkan Pabrik Pembuat: ";
	getline(cin, p.pabrikPembuat);
	cout << "Masukkan Tahuun Pembuatan: ";
	getline(cin, p.tahunPembuatan);
	cout << "Masukkan Harga Motor: ";
	getline(cin, p.hargaMotor);
	
	cout << "\n** DATA MOTOR ANDA **\n";
	cout << "\n|| Nama motor		: "<<p.namaMotor<<"||"<<endl;
	cout << "\n|| Pabrik Pembuat	: "<<p.pabrikPembuat<<"||"<<endl;
	cout << "\n|| Tahun Pembuatan	: "<<p.tahunPembuatan<<"||"<<endl;
	cout << "\n|| Harga Motor		: "<<p.hargaMotor<<"||"<<endl;
	cout << "*****************************";
	
	return 0;
	
	
	
}
