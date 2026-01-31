#include<iostream>
using namespace std;

int main(){
	int a=10;
	int *p= &a;
	cout<<"Nilai a: "<<a<<endl;
	cout<<"Alamat a: "<< &a<<endl;
	cout<<"Nilai p= "<<p<<endl;
	cout<<"Nilai yang ditunjuk oleh p: "<<*p<<endl;
}
