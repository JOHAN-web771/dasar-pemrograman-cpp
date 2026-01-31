#include<iostream>
using namespace std;

int main(){
	int total = 0;
	for (int i=1; i<=10; i++){
		total += i;
		cout<<"Bilangan ke-"<<i<<": "<<i<<", Total:"<<endl;
		cout<<"Penjumlahan dari 10 bilangan positif pertama adalah: "<<total<<endl;
	}
	return 0;
}
