#include<iostream>
using namespace std;

int main(){
	int sisi1, sisi2, sisi3;
	char lanjut;
do{

	cout << "Masukkan panjang  sisi 1: ";
	cin >> sisi1;
	
	cout << "Masukkan panjang  sisi 2: ";
	cin >> sisi2;
	
	cout << "Masukkan panjang  sisi 3: ";
	cin >> sisi3;
	
	
	if (sisi1 + sisi2 > sisi3 && sisi1 + sisi3 > sisi2 && sisi2 + sisi3 > sisi1){
	  if (sisi1 == sisi2 && sisi2 == sisi3){
	  	cout << "Ini adalah Segitiga sama sisi"<<endl;
	} else if ( sisi1 == sisi2 || sisi1 == sisi3 || sisi2 ==sisi3){
		cout << "segitiga sama kaki"<<endl;  
	} else {
		cout << "Ini adalah Segitiga Sembarang"<<endl;
    } 
   
} else{
	cout << "Ketiga sisi membentuk segitika yang tidak valid"<<endl;
	} cout << "Mau Lanjut? (y/n): ";
	cin >> lanjut;

}while  (lanjut == 'Y' || lanjut == 'Y');
cout << "Terimakasih Telah Mencoba bro ;}" <<endl;
	return 0;
}



