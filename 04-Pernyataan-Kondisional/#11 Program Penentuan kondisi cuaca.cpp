#include<iostream>
using namespace std;

int main (){
	int suhu;
	
	cout<<" Masukkan suhu (c): ";
	cin>>suhu;
	
	if (suhu <= 0) {
		cout<< "suhu sangat dingin";
	} else if (suhu <= 10) {
		cout<<"kondisi cuaca berawan";
	}else if (suhu <= 25) {
		cout<<"kondisi cuaca cerah dan berawan";
	}else if (suhu <= 35) {
		cout<<"kondisi cuaca panas dan cerah";
	}else {
		cout<< "kondisi tidak diketahui";
	}
	return 0;
}
