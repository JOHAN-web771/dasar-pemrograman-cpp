#include<iostream>
using namespace std;

bool genap(int x) {
    return x % 2 == 1;
}

int main(){
	int nilai1= 4;
	int hasil= genap(nilai1);
	cout<<"Nilai Modulusnya adalah: "<<hasil<<endl;
	return 0;
}
