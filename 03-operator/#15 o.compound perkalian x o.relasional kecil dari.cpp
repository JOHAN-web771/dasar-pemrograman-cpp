#include <iostream>
using namespace std;

int main ()
{
	int p = 2, q = p;
	p += p;
	
	cout<<"p : "<< p << endl;
	cout<<"q : "<< q << endl;
	bool nilai;
	nilai = (p > q);
	cout<<"Nilai = "<<nilai;
	return 0;
}
