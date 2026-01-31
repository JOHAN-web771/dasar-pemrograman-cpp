#include<iostream>
using namespace std;

void ubahNilai(int *x){ //kuncinya ada asterik
	*x=20;
}

int main(){
	int a =10;
	
	ubahNilai(&a);
	cout<<a;
}
