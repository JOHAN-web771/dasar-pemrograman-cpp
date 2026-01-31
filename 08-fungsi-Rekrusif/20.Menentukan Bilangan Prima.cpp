#include <iostream>
using namespace std;

bool bilPrima(int n, int i = 2) {
    if (n <= 2)
        return (n == 2);
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    return bilPrima(n, i + 1);
}

int main() {
    int angka;
    char cobaLagi;
    
do{
    cout << "\n<<++ Program Pengelompokan Bilangan Prima Sederhana ++>>\n";
    cout << "Masukkan angka: ";
    cin >> angka;

    if (bilPrima(angka))
        cout << "Termasuk Bilangan Prima";
    else
        cout << "Bukan Bilangan Prima";
        
        cout << "\nMau Coba Lagi? (y/n): ";
        cin >> cobaLagi;
        
}while (cobaLagi == 'Y' || cobaLagi == 'y');
cout <<"\n Terimakasih Telah Mencoba Program Ini ;]\n";
    return 0;
}

