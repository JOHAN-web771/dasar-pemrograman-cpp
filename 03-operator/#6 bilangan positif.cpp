#include <iostream>
using namespace std;

int main() {
	int p;
	
	cout <<" Masukkan Nilai a : ";
	cin>> p;
	
	bool hasil = p > 0;
	cout<<" Nilai p : " << p << endl;
	if (hasil) {
		cout<<" Nilai p bernilai positif"<<endl;
	} else if (p == 0){
		cout<<" Nilai benilai nol"<< endl;
	}
	else {
		cout<<" Nilai p bernilai negatif"<<endl;
	}
	return 0;
	
}
