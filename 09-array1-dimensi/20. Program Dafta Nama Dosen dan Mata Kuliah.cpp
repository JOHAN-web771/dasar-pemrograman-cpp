#include <iostream>
using namespace std;

int main() {
    string dosen[3] ;
	string matakuliah[3] ;

    cout << "=== Data Dosen dan Mata Kuliah ===\n\n";
    for (int i = 0; i < 3; i++) {
        cout << "Dosen Ke- " << i+1 <<":"<< endl;
        cout << "Nama: " ;
        getline(cin, dosen[i]);
        cout << "Mata Kuliah : "; 
		getline(cin, matakuliah[i]);
		cin.ignore();
    }

    for (int i = 0; i < 3; i++) {
    	cout <<"-----------------------------\n";
    	cout << "Dosen Ke- " << i+1 <<":"<< endl;
        cout << "Dosen       : " << dosen[i] << endl;
        cout << "Mata Kuliah : " << matakuliah[i] << endl;
        cout << "-----------------------------\n";
    }

    return 0;
}

