#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream file("angka.txt");
    int x;
    while(file >> x)
        cout << x << endl;
}

