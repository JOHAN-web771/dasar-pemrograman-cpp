#include<iostream>
using namespace std;

int faktorial(int n) {
    int hasil = 1;
    for(int i = 1; i <= n; i++)
        hasil *= i;
    return hasil;
}

int main(){
	int nilai= 5;
	int faktor = faktorial(5);
	cout<<"Faktorial dari bilangan 5 Adalah: "<<faktor<<endl;
}
