#include <iostream>
using namespace std;
 int main(){
 	char golongan;
 	cout<<"masukkan golongan darah anda (A/B/ab/O): ";
 	cin>> golongan;
 	
 	switch (golongan) {
 		case 'A':
 			cout<<"golongan darah A";
 			break;
 		case 'B':
 			cout<<"golongan darah B";
 			break;
 		case 'a':
 		case 'b':
 			cout<<"golongan darah AB";
 			break;
 		case 'O':
 			cout<<"golongan darah O";
 			break;
 		default :
 			cout<<"Data tidak valid";
 			break;
	 }
	 return 0;
 }
