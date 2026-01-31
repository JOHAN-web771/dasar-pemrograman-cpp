#include <iostream>
#include <conio.h>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;

int main() {
    int a = 25;
    int b = 3;
    int c = 2;
    int d = 90;

    float akar, pangkat, sinus, cosinus;

    // akar
    akar = sqrt(a);
    cout << "Akar dari " << a << " adalah " << akar << endl;

    // pangkat
    pangkat = pow(b, c);
    cout << b << " pangkat " << c << " adalah " << pangkat << endl;

    // konversi derajat ke radian
    double radian = d * M_PI / 180.0;

    // sinus dan cosinus
    sinus = sin(radian);
    cout << "sin sudut " << d << " derajat adalah " << sinus << endl;

    cosinus = cos(radian);
    cout << "cos sudut " << d << " derajat adalah " << cosinus << endl;

    getch(); // tunggu tombol sebelum keluar
    return 0;
}

