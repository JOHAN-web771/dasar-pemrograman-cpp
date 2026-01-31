#include<iostream>
using namespace std;

int main() {
	int bilangan;
	cout<<"Masukkan Bilangan: ";cin>>bilangan;
	
	long long faktorial = 1;
	for (int i = 1; i <= bilangan; i++) {
		faktorial *= i;
	}
	cout<<"Nilai faktorial dari "<< bilangan <<" adalah: "<< faktorial <<endl;
return 0;
}
