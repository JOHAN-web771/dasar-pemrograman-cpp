#include <iostream>
using namespace std;

int main(){
	int tiket;
	
	cout<<"                   *            "<<endl;
	cout<<"                  ***           "<<endl;                  
	cout<<"                 *****          "<<endl;                 
	cout<<"                *******         "<<endl;
	cout<<"                  |||           "<<endl;
	cout<<"            ~~~~~~~~~~~~~~~~~   "<<endl;
	
	cout<<"|| Flash sale tiket pesawat murah Johan Air||"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;


	cout<<"1.jakarta -> Papua nugini"<<endl;
	cout<<"2,jakarta -> Pulau Sentinel"<<endl;
	cout<<"3.jakarta -> Antartika"<<endl;
	cout<<"4.jakarta -> Mars"<<endl;
	cout<<"5.Jakarta -> gurun sahara"<<endl;

	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	
	cout<<"Masukkan Pilihan Anda( (1-5)) : ";
	cin>>tiket;
	
	switch (tiket) {
		case 1:
			cout<<"Anda memilih paket 1 dengan harga 1.500.000";
			break;
		case 2:
			cout<<"Anda memilih paket 2 dengan harga 5.000.000";
			break;
		case 3:      
		                cout<<"Anda memilih paketm3 dengan harga 6.000.000";
		                break;
		case 4:
			cout<<"Anda memilih paket 4 dengan harga 10.000.000";
			break;
		case 5:
			cout<<"Anda memilih paket 5 dengan harga 8.000.000";
			break;
		default:
			cout<<"Pilihan anda tidak valid";
	}
	return 0;
}
