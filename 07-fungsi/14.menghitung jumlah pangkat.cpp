#include<iostream>
using namespace std;

int pangkat(int a, int b) {
    int hasil = 1;
    for(int i = 0; i < b; i++)
        hasil *= a;
    return hasil;
}


int main(){
	int x=5;
	int y=3;
	int perpangkatan= pangkat(x,y);
	cout<<"Total Nilai Pangkat x & y adalah: "<<perpangkatan<<endl;
	return 0;
}

