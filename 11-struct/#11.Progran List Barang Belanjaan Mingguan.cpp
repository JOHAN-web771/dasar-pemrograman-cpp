#include <iostream>
#include <string>
using namespace std;

struct daftarBarang{
	string barang1;
	string barang2;
	string barang3;
	string barang4;
	string barang5;
	
	
};

int main(){
	daftarBarang A;
	cout << "\n--List Daftar Barang Belanjaan Mingguan --\n";
	cout <<";___________________________________________;\n";
	
	cout << "Masukkan Barang 1: ";
	getline (cin, A.barang1);
	cout << "Masukkan Barang 2: ";
	getline (cin, A.barang2);
	cout << "Masukkan Barang 3: ";
	getline (cin, A.barang3);
	cout << "Masukkan Barang 4: ";
	getline (cin, A.barang4);
	cout << "Masukkan Barang 5: ";
	getline (cin, A.barang5);
	cin.ignore();
	
	
	cout << "\n -- List Barang Belanjaan -- \n";
	cout << "1. "<< A.barang1<< endl;
	cout << "2. "<< A.barang2<< endl;
	cout << "3. "<< A.barang3<< endl;
	cout << "4. "<< A.barang4<< endl;
	cout << "5. "<< A.barang5<< endl;
	cout << "-- Semangat Belanjanya ;} ;} --";
	
	return 0;
	
}
