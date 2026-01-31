#include<iostream>
using namespace std;

int main() {
	int angka1, angka2;
	cout<<"Masukkan angka pertama : "; cin>>angka1;
	cout<<"Masukkan angka kedua : ";cin>>angka2;
	int bawah = (angka1 < angka2)? angka1 +1 : angka2 +1 ;
	int atas = (angka1 < angka2)? angka2 : angka1;
	
	for(int i = bawah; i<= atas; i++){
		cout<<i<<" ";
	}
	return 0;
}
