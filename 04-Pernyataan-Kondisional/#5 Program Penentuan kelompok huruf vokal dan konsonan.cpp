#include <iostream>
using namespace std;

int main(){

	char karakter;
	
	cout<<"Masukkan sebuah Karakter : ";
	cin>>karakter;
	
	karakter = tolower (karakter);
	
	if(karakter >= 'a' && karakter <= 'z') {
		if (karakter == 'a' || karakter == 'i' || karakter == 'u' || karakter == 'e' || karakter == 'o') {
			cout<<"karakter '"<< karakter << "'adalah vokal" <<endl;
		}  else {
			cout<<"karakter'"<< karakter <<"' adalah konsonan" <<endl;
		}
}

return 0;
}
		
