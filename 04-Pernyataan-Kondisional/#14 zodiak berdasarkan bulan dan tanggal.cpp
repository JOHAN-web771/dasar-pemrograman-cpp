#include<iostream>
using namespace std;

int main(){
	int bulan, tanggal;
	
	cout<<"Masukkan bulan (1-12): ";
	cin>>bulan;
	
	cout<<"Masukkan tanggal (1-31)): ";
	cin>>tanggal;
	
	if ((bulan == 1 && tanggal >= 20) || (bulan == 2 && tanggal <= 18)) {
		cout<< "Zodiak Aquarius";		
	}else if ((bulan== 2 && tanggal >= 19) || (bulan == 3 && tanggal <= 20)) {
		cout<< "Zodiak Pisces";
	}else if ((bulan== 3 && tanggal >= 21) || (bulan == 4 && tanggal <= 19)) {
		cout<< "Zodiak Aries";
	}else if ((bulan== 4 && tanggal >= 20) || (bulan == 5 && tanggal <= 20)) {
		cout<< "Zodiak Taurus";
	}else if ((bulan== 5 && tanggal >= 21) || (bulan == 6 && tanggal <= 20)) {
		cout<< "Zodiak Gemini";
	}else if ((bulan== 6 && tanggal >= 21) || (bulan == 7 && tanggal <= 22)) {
		cout<< "Zodiak Cancer";
	}else if ((bulan== 7 && tanggal >= 23) || (bulan == 8 && tanggal <= 22)) {
		cout<< "Zodiak Leo";
	}else if ((bulan== 8 && tanggal >= 23) || (bulan == 9 && tanggal <= 22)) {
		cout<< "Zodiak Virgo";
	}else if ((bulan== 9 && tanggal >= 23) || (bulan == 10 && tanggal <= 22)) {
		cout<< "Zodiak Libra";
	}else if ((bulan== 10 && tanggal >= 23) || (bulan == 11 && tanggal <= 21)) {
		cout<< "Zodiak Scorpio";
	}else if ((bulan== 11 && tanggal >= 22) || (bulan == 12 && tanggal <= 21)) {
		cout<< "Zodiak Sagiatarius";
	}else if ((bulan== 12 && tanggal >= 22) || (bulan == 1 && tanggal <= 19)) {
		cout<< "Capricorn";
	}
	return 0;
}
