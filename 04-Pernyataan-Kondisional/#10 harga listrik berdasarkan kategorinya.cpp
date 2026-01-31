#include<iostream>
using namespace std;

int main()
{
	double pemakaian;
	double totalTagihan;
	
	cout<<"Masukkan pemakaian KWH: ";
	cin>> pemakaian;
	
	if (pemakaian <= 50) {
		totalTagihan = pemakaian * 11100;
	} else if (pemakaian <= 150) {
		totalTagihan = 50 * 11100 + (pemakaian - 50) * 1200;
	}else if (pemakaian <= 250) {
		totalTagihan = 50 * 11100 + 11 * 1200 + (pemakaian - 150) * 1300;
	}else {
		totalTagihan =50 * 11100 + 100 * 1200 + 100  * 1300 + (pemakaian - 250) * 1500;
	}
	
	totalTagihan = totalTagihan * 0.05;
	
	cout <<" Total Tagihan Listrik (Rp): "<< totalTagihan <<endl;
	return 0;
}
