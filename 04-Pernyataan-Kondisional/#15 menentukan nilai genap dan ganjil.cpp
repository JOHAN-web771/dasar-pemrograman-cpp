#include<iostream>
using namespace std;

int main(){
	int bilangn; 
	cout<<"Masukkan Bilangan: ";
	cin>>bilangn;
	
	if (bilangn % 2 == 0) {
		cout<<"Bilangan Genap";
	}else {
		cout<<"Bilangan ganjil";
	}
	return 0;
}
