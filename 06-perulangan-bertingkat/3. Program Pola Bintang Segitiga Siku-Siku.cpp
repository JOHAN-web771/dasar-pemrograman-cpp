#include<iostream>
using namespace std;

int main(){
	for(int i=1; i<=5; i++){ // membentuk baris
		for(int j=1; j<=i; j++){  // membentik kolom 
			cout<<"*"; // mencetak simbol *
		}
		cout<<endl; // membentuk baris baru
	}
}
