#include<iostream>
using namespace std;

int main(){
	int arr[5]={2,4,6,8,10}; //dengan menggunakan kombinasi array
	int *p= arr;
	
	
	cout<<"Elemen Pertama: "<<*p<<endl;
	cout<<"Elemen Kedua: "<<*(p + 1)<<endl;
	cout<<"Elemen Ketiga: "<<*(p + 2)<<endl;

}
