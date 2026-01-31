#include <iostream>
using namespace std;

int main(){
	int bulan, tahun;
	
	cout<< "Masukkan Bulan (1-12) : ";
	cin>>bulan;
	
	cout<<"Masukka Tahun : ";
	cin>>tahun;
	
	if(bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12 ) {
		cout<<"Jumlah hari dalam bulan ini adalah 31 hari"<<endl;
	} else if(bulan == 2 || bulan == 4 || bulan == 6 || bulan == 9 || bulan == 9) {
		cout<<"Jumlah hari di bulan ini adalah 30 hari"<<endl;
	}
	return 0;
	
	} 
	
