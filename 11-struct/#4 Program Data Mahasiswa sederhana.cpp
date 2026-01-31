#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{
	string nama;
	string nim;
	float ipk;
};
	int main (){
		mahasiswa p;
		
		cout << "\n+++ Program Data Mahasiswa Sederhana +++\n";
		cout << "Masukkan Nama Anda	: ";
		getline(cin, p.nama);
		cout << "Masukkan NIM Anda	: ";
		getline(cin, p.nim);
		cout << "Masukkan IPK Anda	: ";
		cin >> p.ipk;
		
		cout << "\n === DATA MAHASISWA ===\n";
		cout <<"Nama Mahasiswa	: "<<p.nama<<endl;
		cout <<"NIM Mahasiswa	: "<<p.nim<<endl;
		cout <<"IPK Mahasiswa	: "<<p.ipk<<endl;
		cout << "==========================";
		
		return 0;
	}
