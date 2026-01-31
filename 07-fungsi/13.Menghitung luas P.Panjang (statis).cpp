#include<iostream>
using namespace std;

int hitKeliling(int p, int l){
    return 2*(p+l);
}

int main(){
    int p = 5;
    int l = 6;
    cout << "Luas Persegi Panjang = " << hitKeliling(p, l) << endl;
    return 0;
}

