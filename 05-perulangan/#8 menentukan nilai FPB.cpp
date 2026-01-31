#include <iostream>
using namespace std;

int main() {
	int bil1, bil2;
	cout<<"Masukkan bilangan 1: ";cin>>bil1;
	cout<<"Masukkan bilangan 2: ";cin>>bil2;
	
	int a = bil1;
	int b = bil2;
	
	while ( b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	cout<<"FPB dari "<<bil1<<" dan "<<bil2<<" adalah: "<<a<<endl;
	 return 0;
}
