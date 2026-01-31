#include<iostream>
using namespace std;

int main() {
	int bilangan;
	cout<<"Masukkan bilangan: "; cin>>bilangan;
	
	bool prima = true;
	if (bilangan <=1){
		prima = false;
	} else{
		for(int i = 2; i*i <= bilangan; i++) {
			if (bilangan % i == 0) {
				prima = false;
				break;
			}
		}
	}
	if (prima) {
		cout<< bilangan <<"adalah bilangan prima."<<endl;
	
	}else {
		cout<< bilangan <<"bukan bilangan prima."<<endl;
	}
	return 0;
	
}
