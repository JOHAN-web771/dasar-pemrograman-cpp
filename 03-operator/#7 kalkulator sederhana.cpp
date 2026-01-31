#include <iostream>
using namespace std;

int main () {
	int angka1, angka2;	
	
	cout << "= Kalkulator sederhana =" <<endl;
	cout << "Masukan angka pertama: ";
	cin >> angka1;
	
	cout << "Masukan angka kedua: ";
	cin >> angka2;
	
		int tambah = angka1 + angka2;
		int kurang = angka1 - angka2;
		int kali = angka1 * angka2;
		int bagi = angka1 / angka2;
		int modulo = angka1 % angka2;
		
		cout << "\n== Hasil Operator ==\n";
		cout << "1.Tambah : "<< tambah << endl; 
		cout << "2.kurang : "<< kurang << endl; 
		cout << "3.Kali	 : "<< kali << endl; 
		cout << "4.Bagi	 : "<< bagi << endl; 
		cout << "5.Modulus: "<< modulo << endl; 
        

    return 0;

}
               
	
	

