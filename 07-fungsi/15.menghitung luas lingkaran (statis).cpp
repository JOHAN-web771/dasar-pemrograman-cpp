#include<iostream>
#define phi 3.14
using namespace std;

double luasLingkaran(double r) {
    return phi * r * r;
}

int main(){
	cout<<luasLingkaran(4);
}

