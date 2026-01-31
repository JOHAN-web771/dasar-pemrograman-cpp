#include <iostream>
using namespace std;

int main(){
	int pertama;
	int kedua;
	
	cout << "\n++ Program Sederhana Menentukan Nilai terbesar ++\n";
	cout << "------------------------------------------------------\n";
	cout << "Masukkan Bilangan 1: ";
	cin >> pertama;
	
	cout << "Masukkan Bilangan :2 ";
	cin >> kedua;
	
    if (pertama > kedua) {
    	cout<<"Nilai maksimum adalah : "<<pertama <<endl;
	} else if (kedua > pertama) {
		cout<<" Nilai maksimum adalah : "<<kedua <<endl;
	} else {
		cout<<"Kedua bilangan sama besar :"<< pertama <<endl;
	}
	cout << "Terimakasih Telah Mencoba boskyu :):)";
	return 0;
	
}
