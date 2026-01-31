#include <fstream>
#include <iostream>
using namespace std;

int main() {
	char pilih;
do{

    ofstream file("log.txt", ios::app);
    string aktivitas;

    cout << "Masukkan aktivitas: ";
    getline(cin, aktivitas);

    file << aktivitas << endl;
    file.close();

    cout << "Aktivitas dicatat";
    
    cout << "\nMau lanjut(y/n): ";
    cin >> pilih;
    
}while (pilih == 'Y' || pilih == 'y');
cout << "\nTerimakasih telah menggunakan layanan kami! \n";
}

