#include <iostream>
using namespace std;

int main() {
	int nilai;
	cout << "Masukan nilai ujian anda: ";
	cin >> nilai;
	
	if (nilai >= 80)
    cout << "Nilai: A\n";
    
    else if(nilai >= 70)
	cout << " Grade B\n";
	
	else if(nilai >= 60)
	cout << "Grade C\n";
	
	else if(nilai >= 50)
	cout  << "Grade D\n";
	
	return 0;

}
