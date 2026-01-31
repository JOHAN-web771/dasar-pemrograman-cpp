#include <iostream>
using namespace std;

int main(){
	float bmi;
	double tinggi, berat;
	cout<<"Masukkan Berat badan anda(Kg): ";cin>>berat;
	cout<<"Masukkan Tinggi badan anda(pakai koma):";cin>>tinggi;
	
	bmi = berat / (tinggi * tinggi );
	cout<<"\n BMI anda adalah: "<<bmi<<endl;
	
	if(bmi < 18.5) {
		cout<<"Kategori: Kurus (underweight)"<<endl;
	} else if(bmi >= 18.5 && bmi <= 24.9) {
		cout<<"Kategori: Normal (Healthy weight)"<<endl;
	} else if(bmi >= 24.9 && bmi <= 30) {
		cout<<"Kategori: Kelebihan berat badan "<<endl;
	}else {
		cout<<"Kategori: anda menderita Obesitas"<<endl;
	}
	return 0;
	

}
