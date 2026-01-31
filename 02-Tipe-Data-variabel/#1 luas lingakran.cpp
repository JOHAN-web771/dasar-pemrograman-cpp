#include <iostream>
#define phi 3.14
using namespace std;

int main()
{
	int jari; 
	float luas;
	
	cout << "Masukkan Jari-jari Lingkaran =  ";
	cin>>jari;
	
    luas=phi * jari * jari;
    cout <<"Luas Lingkaran =  "<< luas << endl;
    
    return 0;
}

