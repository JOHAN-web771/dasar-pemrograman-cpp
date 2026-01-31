#include<iostream>
using namespace std;

int main(){
	int x=5;
	int *p= &x;
	
	cout<<"Nilai x sebelum: "<<x<<endl;
	*p=20;
	cout<<"Nilai x setelah: "<<x<<endl;
}
