#include <iostream>
using namespace std;

int main() {
	int a, b;
	
	
	cout<<" Masukkan Nilai a: ";
	cin>> a;
	cout<<" Masukkan Nilai b: ";
	cin>> b;
	
	int penjumlahan = a += b;
	cout<<"hasil penjumlahan a + b : "<< penjumlahan << endl;
	return 0;
	
}
