//10.Bilangan Romawi ke bilangan desimal

#include <iostream>
#include <string>
using namespace std;

int main() {
    string romawi;
    cout << "Masukkan bilangan Romawi: "; 
cin >> romawi;
    int desimal = 0;
    for (int i = 0; i < romawi.length(); i++) {
        switch (romawi[i]) {
            case 'I': desimal += 1; break;
            case 'V': desimal += 5; break;
            case 'X': desimal += 10; break;
            case 'L': desimal += 50; break;
            case 'C': desimal += 100; break;
            case 'D': desimal += 500; break;
            case 'M': desimal += 1000; break;
        }
    }
    cout << "Bilangan desimal: " << desimal << endl;
    return 0;
}
