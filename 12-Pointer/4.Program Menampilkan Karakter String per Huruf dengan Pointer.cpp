#include<iostream>
using namespace std;

int main(){
	char str[]="Dasar-dasar Pemrograman!";
	char*p=str;
	
	while (*p !='\0') {
	cout<<*p << " ";
	p++;
	}
	cout<<endl;
}
