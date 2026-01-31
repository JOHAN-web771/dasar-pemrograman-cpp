#include <iostream>
using namespace std;

int main(){
	int a = 5;
	int b = 10;
	
	if (a > 0 && b > 0) { 
		cout << "Kedua bilangan Positif"<<endl;
	}
	if (a > 0 || b > 10) {
		cout<< "Salah satu bilangn positif"<<endl;
	}
	if (!(a > 10)){
		cout<< "a tidak lebih  besar dari 10"<<endl;
	}
	return 0;
}
