#include<iostream>
using namespace std;

int main(){
	int hari;
	cout<<"Masukkan hari(`1-7): ";
	cin>>hari;
	
	switch (hari){
		case 1 :
			cout<<"Hari senin";
			break;
	                case 2 :
			cout<<"Hari selasa";
         			break;
         		case 3 :
			cout<<"Hari rabu";
			break;
		case 4 :
			cout<<"Hari kamis";
			break;
		case 5 :
			cout<<"Hari jumat";
			break;
		case 6 :
			cout<<"Hari sabtu";
			break;
		case 7 :
			cout<<"Hari minggu";
			break;
		default:
			cout<<"pilihan tidak valid";
			break;
         		}
         		return 0;
		
}
