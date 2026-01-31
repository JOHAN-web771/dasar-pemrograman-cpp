#include<iostream>
using namespace std;

int main(){
	int var=75;
	int *ptr= &var;
	int **ptr2= &ptr;
	int ***ptr3= &ptr2;
	
	cout<<"Nilai var: "<<var<<endl;
	cout<<"Alamat var: "<< &var<<endl;
	cout<<"Nilai ptr= "<<ptr<<endl;
	cout<<"Nilai ptr2= "<<ptr2<<endl;
	cout<<"Nilai ptr3= "<<ptr3<<endl;
	cout<<"Nilai yang ditunjuk oleh ptr3: "<<**ptr2<<endl;
}
