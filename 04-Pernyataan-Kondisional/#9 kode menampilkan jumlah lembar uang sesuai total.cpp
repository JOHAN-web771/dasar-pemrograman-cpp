#include<iostream>
using namespace std;

int main()
{
	int totalHarga;
	int uang[] = {500, 200, 100, 50, 20,10, 5, 2, 1};
	int jumlah[9] = {0};
	
	cout<<"Masukkan Total Harga: ";
	cin>>totalHarga;
	
	for (int i = 0; i< 9; i++) {
		jumlah[i] = totalHarga / uang[i];
		totalHarga = totalHarga % uang[i];
		
	}
	
	cout<<"Jumlah lembar uang Kertas: "<<endl;
	int totalLembar = 0;
	for (int i =0; i < 9; i++) {
		if (jumlah[i] > 0) {
			cout<< uang[i]<< "=" <<jumlah[i]<<endl;
			totalLembar + jumlah[i];
		}
	}
	cout<<"Total Lembar: "<< totalLembar <<endl;
	return 0;
}
