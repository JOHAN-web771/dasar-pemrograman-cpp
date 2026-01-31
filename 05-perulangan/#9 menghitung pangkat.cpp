#include<iostream>
using namespace std;

int main() {
	double bilangan, pangkat;
	cout<<"Masukan bilangan: ";cin>>bilangan;
	cout<<"masukkan pangkat: ";cin>>pangkat;
	
	double hasil = 1;
	for (int i = 1; i <= pangkat; i++) {
		hasil *= bilangan;
	}
	cout<< bilangan<<" pangkat "<< pangkat<< " adalah: "<<hasil<<endl;
	return 0;
	
}
