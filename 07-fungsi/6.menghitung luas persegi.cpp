#include<iostream>
using namespace std;

	
int luas(int s) {
    int luas= s * s;
	return luas; 
}

int main(){
	int sisi= 7;
	int total = luas(sisi);
	cout<<"Luas Persegi Adalah: "<<total<<endl;
	
}

