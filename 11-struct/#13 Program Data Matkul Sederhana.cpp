#include <iostream>
#include <string>
using namespace std;

struct matkul{
	string namaMatkul;
	string namaDosen;
	int sks;
	
};

int main(){
	matkul b;
	cout << "Program Daftar Kuliah Sederhana" <<endl;
	cout << "Masukkan Mata Kuliah		: ";
	getline(cin, b.namaMatkul);
	cout << "Masukkan Nama Dosen Pengampu	: ";
	getline(cin, b.namaDosen);
	cout << "Masukkan Jumlah SKS		: ";
	cin >> b.sks;
	cin.ignore();
}
