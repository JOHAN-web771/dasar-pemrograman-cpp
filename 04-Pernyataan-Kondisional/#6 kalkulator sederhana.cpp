#include <iostream>
using namespace std;

int main () {
	double angka1, angka2, hasil;
	char operasi;
	
	cout << "= Kalkulator sederhana =" <<endl;
	cout << "Masukan angka pertama: ";
	cin >> angka1;
	
	cout << "Masukan operator (+, -, *, /): ";
	cin >> operasi;
	
	cout << "Masukan angka kedua: ";
	cin >> angka2;
	
	 
	switch (operasi) {
		case '+':
			hasil = angka1 + angka2;
			break;
			
		case '-':
			hasil = angka1 - angka2;
			break;
			
		case '*':
			hasil = angka1 * angka2;
			break;
			
		case '/':
			if (angka2 != 0)
			 hasil = angka1 / angka2;
            else {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
                return 1;
            }
            break;
        default:
            cout << "Operator tidak dikenali." << endl;
            return 1;
    }

    cout << "Hasil: " << angka1 << " " << operasi << " " << angka2 << " = " << hasil << endl;

    return 0;

}
               
	
	

