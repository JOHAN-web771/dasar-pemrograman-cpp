#include <iostream>
using namespace std;

int main(){
	int bulan;
	
	cout<< "Masukkan Bulan (1-12) : ";
	cin>>bulan;
	
	switch (bulan) {
		case 1:
		cout<<"january"<<endl;
		break;
		
		case 2:
		cout<<"February"<<endl;
		break;
		
		case 3:
		cout<<"March"<<endl;
		break;
		
		case 4:
		cout<<"April"<<endl;
		break;
		
		case 5:
		cout<<"May"<<endl;
		break;
		
		case 6:
		cout<<"June"<<endl;
		break;
		
		case 7:
		cout<<"July"<<endl;
		break;
		
		case 8:
		cout<<"August"<<endl;
		break;
		
		case 9:
		cout<<"September"<<endl;
		break;
		
		case 10:
		cout<<"Oktober"<<endl;
		break;
		
		case 11:
		cout<<"November"<<endl;
		break;
		
		case 12:
		cout<<"Desember"<<endl;
		break;
	}
	return 0;
}
