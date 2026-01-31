#include<iostream>
using namespace std;

int faktorial(int n);

int main(){
int n;
cout<<"Masukkan nilai-n: ";cin>>n;
cout<<"Nilai Faktorial "<<n<< " adalah = "<<faktorial(n)<<endl;

}
int faktorial(int n){
	int i, kali=1;
	for(int i=n; i>1; --i){
		kali=kali*i;
	}
	return kali;
} // fungsi yang memanggil dirinya sendiri
