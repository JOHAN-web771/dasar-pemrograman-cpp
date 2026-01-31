#include <iostream>
using namespace std;

// FPB / GCD secara rekursif
int fpb(int a, int b) {
    if (b == 0)
        return a;
    return fpb(b, a % b);
}

int main(){
	int a,b;
	cout<<"Masukkan Bilangan: ";cin>>a>>b;
	
	cout<<"FPB dari "<<a<<" dan "<<b<<" adalah= "<<fpb(a,b);
	return 0;
}
