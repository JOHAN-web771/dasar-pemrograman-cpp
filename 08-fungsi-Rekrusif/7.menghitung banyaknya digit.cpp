#include <iostream>
using namespace std;

int hitungDigit(int n){
    if(n == 0) return 0;
    return 1 + hitungDigit(n/10);
}

int main(){
    cout << hitungDigit(98765);
}
